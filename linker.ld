MEMORY 
{
	FLASH (rx) : ORIGIN = 0x08000000, LENGTH = 32K
	RAM (rwx) : ORIGIN = 0x20000000, LENGTH = 10K
}

SECTIONS
{
	.text : 
	{
		*(.isr_vector)
		*(.text)
		*(.rodata)
		. = ALIGN(4);
		_etext = .;
	} > FLASH
	
	.data :
	{
		_sdata = .;
		*(.data)
		. = ALIGN(4);
		_edata = .;
	} > RAM AT > FLASH
	
	.bss :
	{
		_sbss = .;
		*(.bss)
		. = ALIGN(4);
		_ebss = .;
	} > RAM 
}
