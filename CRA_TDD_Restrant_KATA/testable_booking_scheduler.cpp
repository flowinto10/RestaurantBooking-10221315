#include "gmock/gmock.h"
#include "booking_scheduler.cpp"

class TestableBookingScheduler : public BookingScheduler {
public:
	TestableBookingScheduler(int capacityPerHour) :
		BookingScheduler{ capacityPerHour } {
	}

	MOCK_METHOD(time_t, getNow, (), (override));

#if 0
	TestableBookingScheduler(int capacityPerHour, tm dateTime) :
		BookingScheduler{ capacityPerHour },
		dateTime{ dateTime } {
	}

	time_t getNow() override {
		return mktime(&dateTime);
	}
private:
	tm dateTime;
#endif
};