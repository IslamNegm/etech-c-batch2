#include <stdio.h>
#include <stdint.h>

typedef struct
{
	uint8_t power_led;
	uint8_t adsl_led;
	uint8_t net_led;
	uint8_t lan[4];
	uint8_t wifi;
} RouterStatus;

void update_led_status(RouterStatus router);

int main(void) {
	RouterStatus router_islam;

	router_islam.power_led = 1;
	router_islam.adsl_led = 1;
	router_islam.net_led = 0;
	router_islam.lan[0] = 1;
	router_islam.lan[1] = 0;
	router_islam.lan[2] = 0;
	router_islam.lan[3] = 0;
	router_islam.wifi = 1;

	update_led_status(router_islam);

	printf("sizeof(RouterStatus) = %d\n", sizeof(RouterStatus));
	return 0;
}


void update_led_status(RouterStatus router)
{
	printf("Router Status:\n %d %d %d %d %d %d %d %d\n",
			router.power_led, router.adsl_led, router.net_led,
			router.lan[0], router.lan[1], router.lan[2],
			router.lan[3], router.wifi);
}
