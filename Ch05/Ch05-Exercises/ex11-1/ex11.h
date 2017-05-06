struct sterling
{
	int pounds;
	int shillings;
	int pence;
};

sterling get_sterling( int );
sterling add_sterling( sterling, sterling );
void put_sterling( sterling );