#include "trap.h"
#include "print.h"
#include "debug.h"

void Ka0ticMain(void)
{
   char *string = "Hello and Welcome";
   int64_t value = 0x123456789ABCD;
   
   init_idt();

   printk("%s\n", string);
   printk("This value is equal to %x", value);
   ASSERT(0);
}