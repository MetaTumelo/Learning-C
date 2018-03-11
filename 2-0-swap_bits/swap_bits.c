unsigned char	swap_bits(unsigned char octet)
{
	octet = ((octet &0xf0) >> 4 | (octet &0x0f) << 4);
	return (octet);
}
