#include "game.hpp"

void Game::initializeGame()
{
    cout << "Enter the size of Board" << endl;
    int size;
    cin >> size;
    boardObj = Board::getBoardObject(size);
    Player *gamer1 = new Player("Rajesh", new PlayingPeace(PeaceType::X));
    Player *gamer2 = new Player("Simi", new PlayingPeace(PeaceType::O));
    setplayersList(gamer1);
    setplayersList(gamer2);

    boardObj->displayBoard();
}

deque<Player *> Game::getplayersList()
{
    return playersList;
}

void Game::setplayersList(Player *player)
{
    cout << "Updating PlayersList" << endl;
    playersList.push_back(player);
}

void Game::startGame()
{
    cout << "starting Game" << endl;
    bool winner = false;
    while (!winner)
    {
        cout << "Enter the cordinates to place Peace (x,y) [Enter 404 and 0 to Exit]" << endl;

        // if s in not exit it's coordinates
        // int x = s[0] - '0';
        // int y = s[2] - '0';
        int x,y;
        cin>>x>>y;
        if (x == 404)
        {
            cout << "Exiting the Game" << endl;
            break;
        }
        Player *playerTurn = playersList.front();
        playersList.pop_front();
        bool isadded = boardObj->addPeace(x, y, playerTurn->getplayersPeace());
        if (!isadded)
        {
            cout << "Invalid Move" << endl;
            playersList.push_front(playerTurn);
            continue; // bcz reamining think is not getting executed.. the same player input's again
        }
        else
        {
            boardObj->displayBoard();
            playersList.push_back(playerTurn);
            bool gameStatus = isWinner(x, y, playerTurn->getplayersPeace());
            if (gameStatus == true)
            {
                cout << playerTurn->getName() << " won the game"<<endl;
                winner = true;
                break;
            }
        }
        if (boardObj->getFreeCells() <= 0)
        {
            cout << "Game Over Withdraw"<<endl;
            break;
        }
    }
}

bool Game::isWinner(int row, int col, PlayingPeace *lastplayingPeace)
{
    int rows = boardObj->getBoardSize();
    int cols = boardObj->getBoardSize();
    bool isLeadingDiag = true;
    bool isrow = true;
    bool iscol = true;
    bool isOpositDiag = true;

    // in row
    for (int i = 0; i < cols; i++)
    {
        if (boardObj->getGameBoard()[row][i]->getPeaceType() != lastplayingPeace->getPeaceType())
        {
            isrow = false;
            break;
        }
    }
    // in col
    for (int i = 0; i < rows; i++)
    {
        if (boardObj->getGameBoard()[i][col]->getPeaceType() != lastplayingPeace->getPeaceType())
        {
            iscol = false;
            break;
        }
    }
    
    // leading diagonal
    int x = 0;
    int y = 0;
    while (x < rows && y < cols)
    {
        if (boardObj->getGameBoard()[x][y]->getPeaceType() != lastplayingPeace->getPeaceType())
        {
            isLeadingDiag = false;
            break;
        }
        x++;
        y++;
    }
    // the oposit diagonal
    x = 0, y = cols - 1;
    while (x < rows && y >= 0)
    {
        if (boardObj->getGameBoard()[x][y]->getPeaceType() != lastplayingPeace->getPeaceType())
        {
            isOpositDiag = false;
            break;
        }
        x++;
        y--;
    }
    cout<<"leading"<<isLeadingDiag<<endl;
    cout<<"opops"<<isOpositDiag<<endl;
    cout<<"row"<<isrow<<endl;
    cout<<"col"<<iscol<<endl;
    return isLeadingDiag || isOpositDiag || isrow || iscol;
}