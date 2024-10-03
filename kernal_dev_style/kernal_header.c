#include<linux/kernal.h>
#include<linux/init.h>
#include<linux/types.h>
#include<linux/module.h>
#include<linux/slab.h>
#include<linux/errno.h>


/* <kernal.h> is refers to the macro's and protoype's
* like min() , max() , ARRAY_SIZE()
*/

printk(KERN_INFO "HELLO WORLD");

/*
*
*KERN_EMERG: Emergency messages, usually related to system failure.
*KERN_ALERT: Action must be taken immediately.
*KERN_CRIT: Critical conditions.
*KERN_ERR: Error conditions.
*KERN_WARNING: Warning conditions.
*KERN_NOTICE: Normal but significant conditions.
*KERN_INFO: Informational messages.
*KERN_DEBUG: Debug-level messages.
*/


/* <linux/error.h>
* -ENOMEM: Memory allocation failure.
* -EINVAL: Invalid argument.
* -EIO: Input/output error
*
*/
if(!ptr){
    return -ENOMEM;
}


/*
<linux/init.h>
* This header is refer's to the initialize and exiting header.
* Example : IN OOPS we declare the constructor() and destructor().
* Example code :
*/ 
    static int __init my_module_init(void)
    {
        printk(KERN_INFO "INITIALIZE");
        return 0;
    }
    static int __init my_module_exit(void)
    {
        printk(KERN_INFO "EXITED");
    }

    module_init(my_module_init);
    module_exit(my_module_exit);


/* <linux/types.h>
* typedef in linux kernal development
*/

typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;


/*
* <linux/module.h>
* MODULE_AUTHOR :Provides information about the author of the module.
* It's purely informational and is used when loading or inspecting the module.
*
* MODULE_LICENSE : This tells the kernel that the module is licensed under the GPL, enabling the use of GPL-only symbols
*/
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Balaji A.");


/* <linux/slab.h>
* kmalloc() and kfree().
* Allocating the runtime memory on kernal-space 
*/

void *ptr = kmalloc(1024,GFP_KERNAL);
kfree(ptr);

/*
<asm.io>

- port I/O (for devices using I/O ports):
- inb(port), outb(value, port): These functions read and write 8-bit values to/from an I/O port.
- inw(port), outw(value, port): 16-bit versions of I/O operations.
- inl(port), outl(value, port): 32-bit versions of I/O operations.
- Memory-Mapped I/O (for devices using MMIO):
- ioremap(phys_addr, size): Maps a physical memory address to a virtual address for the kernel to access memory-mapped devices.
- ioread32(addr), iowrite32(value, addr): Read and write 32-bit values to memory-mapped I/O addresses.

*/

unsigned char val = inb(0x3F8);   // Read a byte from serial port 0x3F8
outb(0x01, 0x3F8);                // Write a byte to serial port 0x3F8



