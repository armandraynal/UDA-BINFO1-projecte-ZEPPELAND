/*
 * rellotge.c
 * 
 * Copyright 2016 Farfart Frederic <fred.farfart@gmail.com>,  (POSEU EL VOSTRE NOM + web si voleu)
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>

void display(int zona, int xiffra)
{
	/* trobar com fer per selectionar la zona, sapiguent que tindrem 4 xiffres i doncs 28 pins almenys 
   1
  ---
6|   |2
  -7-
5|   |3
  ---
   4
 */
	switch (xiffra) 
	{
		case 0: pin(1) =1;
			pin(2)=1;
			pin(3)=1;
			pin(4)=1;
			pin(5)=1;
			pin(6)=1;
			pin(7)=0;
			break;
		case 1: 
			pin(1)=0;
			pin(2)=1;
			pin(3)=1;
			pin(4)=0;
			pin(5)=0;
			pin(6)=0;
			pin(7)=0;
			break;
		case 2:
			pin(1)=1;
			pin(2)=1;
			pin(3)=0;
			pin(4)=1;
			pin(5)=1;
			pin(6)=0;
			pin(7)=0;
			break;
			//etc
}
int main(int argc, char **argv)
{
	/* i= comptor per les minutes; j= comptor per les hores;
	 * uh= unitat de les hores; dh=desenes de les hores;
	 * um=unitat de les minutes; dm=desenes de les minutes;
	 * */
	if ( i % 60 == 0 )
	{
		j = j +1 ;
		i =0;
	}
	if ( j = 24 )
	{
		j =0;
	}
	uh = j % 10;
	dh=j /10;
	um=i%10;
	dm=i/10;
	display(zona1,dh);
	display(zona2,uh);
	display(zona3,dm);
	display(zona4,um);
	sleep(60);
	return 0;
}

