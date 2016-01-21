cmd_/root/labCode/lab2/mymod.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o /root/labCode/lab2/mymod.ko /root/labCode/lab2/mymod.o /root/labCode/lab2/mymod.mod.o
