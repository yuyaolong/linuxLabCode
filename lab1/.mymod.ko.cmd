cmd_/root/lab1/mymod.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o /root/lab1/mymod.ko /root/lab1/mymod.o /root/lab1/mymod.mod.o
