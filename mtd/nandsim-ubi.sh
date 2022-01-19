modprobe mtd
modprobe mtdblock
modprobe nandsim first_id_byte=0xec second_id_byte=0xa1 third_id_byte=0x00 fourth_id_byte=0x15
chmod 660 /dev/mtd0*
ls -lah /dev/mtd*
cat /proc/mtd
mtdinfo /dev/mtd0
modprobe ubi
modprobe ubifs
#ubiformat /dev/mtd0
#ubiattach -p /dev/mtd0
#ubimkvol /dev/ubi0 -N volume_name -s 64MiB
mkfs.ubifs -r rootfs -m 2048 -e 129024 -c 812 -o ubifs.img
ubinize -o ubi.img -m 2048 -p 128KiB -s 512 ubinize.cfg
dd if=ubi.img of=/dev/mtd0 bs=2048
ubiattach /dev/ubi_ctrl -m 0
sudo mount -t ubifs ubi0_0 /mnt

