#include "adder.h"
#include "prodder.h"
#include "divider.h"
#include <sstream>
#include <iostream>

int main(int argc, char *argv[])
{
if(argc != 3) return 1;
int a;
float b, c;
std::string sa(argv[1]);
std::string sb(argv[2]);
std::string sc(argv[3]);
std::stringstream ssa(sa);
std::stringstream ssb(sb);
std::stringstream ssc(sc);
ssa >> a;
ssb >> b;
ssc >> c;
std::cout << "1=add 2=Prod 3=div \n";
float d;
if(a==1)
{
	d = adder(b, c);
}
else if(a==2)
{
	d = prodder(b, c);
}
else if(a==3)
{
	d = divider(b, c);
}
std::cout << d;
return 0;
}