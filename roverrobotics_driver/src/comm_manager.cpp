#include "comm_manager.hpp"

void CommManager::*readThread(void *arg) {
    clock_t
    std::cout << clock_t.clock() << std::endl;
}

void CommManager::*writeThread(std::string msg) {
   std::cout << clock_t.clock() << std::endl;
}
}
CommManager::CommManager(const std::string &device, float baudRate) {
    pthread_t write_Thread;
    int ret_write;
    pthread_t read_Thread;
    int ret_read;
    ret_write = pthread_create(&write_Thread, NULL, &writeThread(), NULL);
    ret_read = pthread_create(&read_Thread, NULL, &readThread(), NULL);
}
void CommManager::connect(std::string port) {
    serial_port = open(port, O_RDWR);
    if (serial_port < 0) {
        printf("Error %i from open: %s\n", errno, strerror(errno));
    }
}
