nasm -f bin -o boot.bin boot.asm
nasm -f bin -o loader.bin loader.asm
dd if=boot.bin of=kaotic.img bs=512 count=1 conv=notrunc
dd if=loader.bin of=kaotic.img bs=512 count=5 seek=1 conv=notrunc
