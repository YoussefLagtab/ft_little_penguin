obj-m = main.o
KERNEL_DIR = /lib/modules/$(shell uname -r)/build

build:
	$(MAKE) -C $(KERNEL_DIR) M=$(PWD)
clean:
	$(MAKE) -C $(KERNEL_DIR) M=$(PWD) clean

