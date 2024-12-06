OUTPUT_ARCH( "riscv" )
ENTRY(_start)
GROUP(-lgcc)
SECTIONS
{
  . = 0x00000000;
  .init : { *(.init) } 
  .text : { *(.text) }
  .data : { *(.data) }
  .bss : { *(.bss) }
}
