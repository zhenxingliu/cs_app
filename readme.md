# 使用命令说明
   > i386-elf-gcc -O2 -S code.c -m32 -fno-omit-frame-pointer\
   > echo "#include <stdio.h>" | gcc -v -xc -

## 程序运行栈的基本操作
   1. x86-32的程序栈
      - 符合栈工作原理的一块内存域
      -  从高地址向低地址增长
      -  %esp存储栈顶地址
   2. 利用栈支持过程调用与返回
      - 过程调用指令
         call label将返回地址压入栈，跳转到label
      - 返回地址
         - call指令的下一条指令地址
         %eip指令寄存器
      
