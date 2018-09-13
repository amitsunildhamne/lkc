obj-m+=hello_world.o
KDIR:=/lib/modules/$(shell uname -r)/build
$(info $(CC))
all:
	$(MAKE) -C $(KDIR) M=$(PWD) modules

clean:
	$(MAKE) -C $(KDIR) M=$(PWD) clean

.PHONY:
	all

