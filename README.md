# OShw-chap2-1
- Description:
Creating, loading, and removing kernel modules - Assignment: Proceed through the steps described above to create the kernel module and to load and unload the module.

- Steps
1. Compile **test.c** with ```make```
2. Loading module to Linux kernel with command line ```sudo insmod test.ko```
3. Removing module from Linux kernel with command line ```sudo rmmod test```
4. Setting **kernel.dmesg_restrict** to 0 with command line ```sudo sysctl kernel.dmesg_restrict=0```(optional)
5. Invoke dmesg with command line ```dmesg```

![2222](https://user-images.githubusercontent.com/85775331/227571912-15db0e86-9af7-4447-88f8-ee36ea062348.png)
![44444](https://user-images.githubusercontent.com/85775331/227571992-f620e9ec-713a-47e2-be10-820dc0af81df.png)
