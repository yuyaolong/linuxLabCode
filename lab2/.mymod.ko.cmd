cmd_/root/labcode/lab2/mymod.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o /root/labcode/lab2/mymod.ko /root/labcode/lab2/mymod.o /root/labcode/lab2/mymod.mod.o
