#pragma once

enum VehicleType
{
    CAR
};

enum Status
{
    ACTIVE,
    INACTIVE
};

enum ReservationStatus
{
    COMPLETED,
    INPROCESS,
    CANCELED,
    SCHEDULED
};

struct Date
{
    private:
    int day;
    int month;
    int year;
    public:
    Date() : day(1), month(1), year(1970) {}
    Date(int d, int m, int y) : day(d), month(m), year(y) {}
};
