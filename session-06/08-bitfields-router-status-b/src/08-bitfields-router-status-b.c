#include <stdio.h>
#include <stdint.h>

typedef struct
{
	uint8_t power_led : 1;
	uint8_t adsl_led : 1;
	uint8_t net_led : 1;
	uint8_t lan1 : 1;
	uint8_t lan2 : 1;
	uint8_t lan3 : 1;
	uint8_t lan4 : 1;
	uint8_t wifi : 1;
} RouterStatus;
/* Now the RouterStatus size is only 1 Byte */

void update_led_status(RouterStatus router);

int main(void) {
	RouterStatus router_islam;

	router_islam.power_led = 1;
	router_islam.adsl_led = 1;
	router_islam.net_led = 0;

	router_islam.lan1 = 0;
	router_islam.lan2 = 0;
	router_islam.lan3 = 0;
	router_islam.lan4 = 0;

	router_islam.wifi = 1;

	update_led_status(router_islam);

	printf("sizeof(RouterStatus) = %d\n", sizeof(RouterStatus));
	return 0;
}


void update_led_status(RouterStatus router)
{
	printf("Router Status:\n %d %d %d %d %d %d %d %d\n",
			router.power_led, router.adsl_led, router.net_led,
			router.lan1, router.lan2, router.lan3,
			router.lan4, router.wifi);
}
