#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/devicetree.h>
#include <zephyr/drivers/gpio.h>
#include <zephyr/sys/printk.h>
#include <zephyr/logging/log.h>

#define SLEEP_TIME_MS   1000

LOG_MODULE_REGISTER(Less4_Exer3, LOG_LEVEL_DBG);

void main(void)
{
        int exercise_num = 3;
        uint8_t data[] = {0x00, 0x01, 0x02, 0x03,
                        0x04, 0x05, 0x06, 0x08,
                        'H', 'e', 'l', 'l','o'};

        //Printf-like messages
        LOG_INF("nRF Connect SDK Fundamentals");
        LOG_INF("Exercise %d",exercise_num);    
        LOG_DBG("A log message in debug level");
        LOG_WRN("A log message in warning level!");
        LOG_ERR("A log message in error level!");

        //Hexdump some data
        LOG_HEXDUMP_INF(data, sizeof(data),"Sample Data!"); 


        while (1) {
                k_msleep(SLEEP_TIME_MS); 
                LOG_INF("Loop");
        }
}