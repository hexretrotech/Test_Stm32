
int main() 
{
     *(unsigned long*)(0x40021018) |= 0x16;     //Clock port enable
     *(unsigned long*)(0x40011004) |= 0x300000; //PC13 output
     
     while(1)
     {
       *(unsigned long*)(0x4001100C) = 0xFFFF;
       for(long i=0; i<1000000; i++) { };
       
       *(unsigned long*)(0x4001100C) = 0x0000;
       for(long i=0; i<1000000; i++ ){ };
     }
}