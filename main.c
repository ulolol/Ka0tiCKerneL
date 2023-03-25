#include "trap.h"
#include "print.h"
#include "debug.h"

void Ka0ticMain(void)
{
   char *string = "Load Ka0ticMain... \n .... Ka0T1CKerneL ....";
   int64_t value = 0x123456789ABCD;
   
   init_idt();

   printk("%s\n", string);
   printk("\n\n Kernel is now Loaded\n");
   printk("Test Print Modes\n");
   printk("This value is equal to %x \n", value);
   printk("\nTest Kernel Module Failure Assertion \n");
   ASSERT(0);
}