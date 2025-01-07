/*this project is  s imple tris game*/
#include <stdio.h>
#include <stdlib.h>

int main() {

	int m, o, turno, giocatore, gx, gy, valido;
	char simbolo;

			turno = 0;
			int griglia[3][3];//creating the grill where to play on

				m = 0;
				o = 0;
				for (m=0; m<3; m++) {
					for (o=0; o<3; o++) {
						griglia[m][o] = -1;
					}
				}

			for (turno=0; turno<9; turno++) {
				if (turno%2==0) { giocatore = 0; }
				else { giocatore = 1; }
				valido = 0;

					while (valido != 1) {
						printf ("Player %d turn: Insert the tile coordinates\n", giocatore);
						scanf("%d %d" , &gy , &gx);

							if ((griglia[gy][gx] != -1) || (gx>2) || (gy>2) || (gx<0) || (gy<0)) {//if for check if coordinates are valid and spot is empty or not alr
								valido = 0;
									if ((gx>2) || (gy>2) || (gx<0) || (gy<0)) {
										printf("Invalid board coordinates\n");
									}
									else {
										printf("The board tile is not empty. Please select an empty tile\n");
									}
							}
							else {
								valido = 1;
								griglia[gy][gx] = giocatore;
							}
					}

						m = 0;
						o = 0;
						for (m=0; m<3; m++) {
							for (o=0; o<3; o++) {
										if (griglia[m][o] == -1) {
											simbolo = '#';
										}
										else {
											if (griglia[m][o] == 0) {
											simbolo = 'X';
											}
											else {
											simbolo = 'O';
											}
										}
								if (o<2) { printf ("%c ", simbolo); }
								else { printf ("%c\n", simbolo); }
							}
						}
				if (( ((griglia[0][0]==1) && (griglia[0][1]==1) && (griglia[0][2]==1)) || ((griglia[1][0]==1) && (griglia[1][1]==1) && (griglia[1][2]==1)) || ((griglia[2][0]==1) && (griglia[2][1]==1) && (griglia[2][2]==1)) || ((griglia[0][0]==1) && (griglia[1][1]==1) && (griglia[2][2]==1)) || ((griglia[2][0]==1) && (griglia[1][1]==1) && (griglia[0][2]==1)) ) || ( ((griglia[0][0]==0) && (griglia[0][1]==0) && (griglia[0][2]==0)) || ((griglia[1][0]==0) && (griglia[1][1]==0) && (griglia[1][2]==0)) || ((griglia[2][0]==0) && (griglia[2][1]==0) && (griglia[2][2]==0)) || ((griglia[0][0]==0) && (griglia[1][1]==0) && (griglia[2][2]==0)) || ((griglia[2][0]==0) && (griglia[1][1]==0) && (griglia[0][2]==0)) )) {
					printf ("Player %d wins!\n", giocatore);//if for check if player won when 3 signs align
						return 0;
				}
				else {
				}
			}
			printf ("Draw!\n");
		return 0;
}

