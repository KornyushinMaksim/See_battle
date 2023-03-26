
#include <iostream>
using namespace std;

//ф-ия печать карты
void print_map(char arr[][10], int si_row, int si_cols) {
	for (int i = 0; i < si_row; i++) {
		for (int j = 0; j < si_cols; j++) {
			cout << arr[j][i] << " ";
		}
		cout << endl;
	}

}
//ф-ия расстановка
void location_ship(char map[][10], int* p_x, int* p_y, int* p_dir, int deck) {
	int cout = 0;

	do {
		int d = rand() % 4;
		*p_dir = d;
		int x = *p_x,
			y = *p_y;
		for (int j = 0; j < deck; j++) {
			if (d == 0) {
				map[x][y] = 79;
				y--;
				if (y < 0 || y >= 9) {
					break;
				}
			}
			else if (d == 1) {
				map[x][y] = 79;
				x++;
				if (x < 0 || x >= 9) {
					break;
				}

			}
			if (d == 2) {
				map[x][y] = 79;
				y++;
				if (y < 0 || y >= 9) {
					break;
				}
			}
			if (d == 3) {
				map[x][y] = 79;
				x--;
				if (x < 0 || x >= 9) {
					break;
				}

			}
			cout++;
		}
	} while (cout < deck);
}
//ф-ия проверка
//bool test_location_ship(char map[][10], int* p_x, int* p_y, int* p_dir, int deck) {
//	location_ship(map, p_x, p_y, p_dir, deck);
//
//}

int main()
{
	//system("chcp 1251>nul");
	srand(time(NULL));
	const int row = 10, cols = 10;
	char map[row][cols]{};
	int x, y, direction;

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < cols; j++) {
			map[j][i] = 250;
		}
	}
	//рандомная расстановка кораблей
	for (int i = 0; i < 10; i++) { //начальная коорд корабля и их кол(10 - количество кораблей)
		x = rand() % row;
		y = rand() % cols;
		int* p_x = &x;
		int* p_y = &y;
		int* p_dir = &direction;
		if (i == 0) {
			int deck = 4;
			location_ship(map, p_x, p_y, p_dir, deck);
		}
		//else if (i == 1 || i == 2) {
		//	int deck = 3;
		//	location_ship(map, p_x, p_y, p_dir, deck);
		//}
		//else if (i == 3 || i == 4 || i == 5) {
		//	int deck = 2;
		//	location_ship(map, p_x, p_y, p_dir, deck);
		//}
		//else if (i == 6 || i == 7 || i == 8 || i == 9) {
		//	int deck = 1;
		//	location_ship(map, p_x, p_y, p_dir, deck);
		//}
	}
	// обрисовка коробля
	for (int a = 0; a < row; a++) {
		for (int b = 0; b < cols; b++) {
			if (map[a][b] == 79) {
				if (b == 9) {
					if (map[a + 1][b] != 79) {
						map[a + 1][b] = 15;
					}
					else {
						map[a + 1][b] = 79;
					}
					if (map[a + 1][b - 1] != 79) {
						map[a + 1][b - 1] = 15;
					}
					else {
						map[a + 1][b - 1] = 79;
					}
					if (map[a][b - 1] != 79) {
						map[a][b - 1] = 15;
					}
					else {
						map[a][b - 1] = 79;
					}
					if (map[a - 1][b - 1] != 79) {
						map[a - 1][b - 1] = 15;
					}
					else {
						map[a - 1][b - 1] = 79;
					}
					if (map[a - 1][b] != 79) {
						map[a - 1][b] = 15;
					}
					else {
						map[a - 1][b] = 79;
					}
				}
				else if (b == 0) {
					if (map[a][b + 1] != 79) {
						map[a][b + 1] = 15;
					}
					else {
						map[a][b + 1] = 79;
					}
					if (map[a + 1][b + 1] != 79) {
						map[a + 1][b + 1] = 15;
					}
					else {
						map[a + 1][b + 1] = 79;
					}
					if (map[a + 1][b] != 79) {
						map[a + 1][b] = 15;
					}
					else {
						map[a + 1][b] = 79;
					}
					if (map[a - 1][b] != 79) {
						map[a - 1][b] = 15;
					}
					else {
						map[a - 1][b] = 79;
					}
					if (map[a - 1][b + 1] != 79) {
						map[a - 1][b + 1] = 15;
					}
					else {
						map[a - 1][b + 1] = 79;
					}

				}
				else {
					if (map[a][b + 1] != 79) {
						map[a][b + 1] = 15;
					}
					else {
						map[a][b + 1] = 79;
					}
					if (map[a + 1][b + 1] != 79) {
						map[a + 1][b + 1] = 15;
					}
					else {
						map[a + 1][b + 1] = 79;
					}

					if (map[a + 1][b] != 79) {
						map[a + 1][b] = 15;
					}
					else {
						map[a + 1][b] = 79;
					}
					if (map[a + 1][b - 1] != 79) {
						map[a + 1][b - 1] = 15;
					}
					else {
						map[a + 1][b - 1] = 79;
					}
					if (map[a][b - 1] != 79) {
						map[a][b - 1] = 15;
					}
					else {
						map[a][b - 1] = 79;
					}
					if (map[a - 1][b - 1] != 79) {
						map[a - 1][b - 1] = 15;
					}
					else {
						map[a - 1][b - 1] = 79;
					}
					if (map[a - 1][b] != 79) {
						map[a - 1][b] = 15;
					}
					else {
						map[a - 1][b] = 79;
					}
					if (map[a - 1][b + 1] != 79) {
						map[a - 1][b + 1] = 15;
					}
					else {
						map[a - 1][b + 1] = 79;
					}
				}
			}
		}
	}
	print_map(map, row, cols);

	//цикл самой игры
	while (true) {
		bool flag = false;
		int a, b;
		cout << "Enter the coordinates of the shot: " << endl;
		cin >> a >> b;
		system("cls");
		if ((a >= 0 && a <= 10) && (b >= 0 && b <= 10)) {
			if (map[a][b] == 79) {
				if (map[a][b + 1] == 79 ||     //проверка наличия соседних палуб
					map[a + 1][b + 1] == 79 ||
					map[a + 1][b] == 79 ||
					map[a + 1][b - 1] == 79 ||
					map[a][b - 1] == 79 ||
					map[a - 1][b - 1] == 79 ||
					map[a - 1][b] == 79 ||
					map[a - 1][b + 1] == 79) {
						map[a][b] = 88;
						cout << "Injared !" << endl;
				}
				else {
					cout << "You hit !" << endl;
					if (b == 9) {
						map[a][b] = 88;
						map[a + 1][b] = 15;
						map[a + 1][b - 1] = 15;
						map[a][b - 1] = 15;
						map[a - 1][b - 1] = 15;
						map[a - 1][b] = 15;
					}
					else if (b == 0) {
						map[a][b] = 88;
						map[a][b + 1] = 15;
						map[a + 1][b + 1] = 15;
						map[a + 1][b] = 15;
						map[a - 1][b] = 15;
						map[a - 1][b + 1] = 15;
					}
					else {
						map[a][b] = 88;
						map[a][b + 1] = 15;
						map[a + 1][b + 1] = 15;
						map[a + 1][b] = 15;
						map[a + 1][b - 1] = 15;
						map[a][b - 1] = 15;
						map[a - 1][b - 1] = 15;
						map[a - 1][b] = 15;
						map[a - 1][b + 1] = 15;
					}
				}
			}
			else {
				map[a][b] = 88;
				cout << "You missed !" << endl;
			}
			print_map(map, row, cols);
		}
		else {
			print_map(map, row, cols);
			cout << "You enter incorect valeu !" << endl;

		}
		//остановка игры. закончились корабли
		//условие проверки коpаблей на поле
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < cols; j++) {
				if (map[i][j] == 79) {
					flag = true;
				}
			}
		}
		if (flag == false) {
			break;
		}

	}
	cout << endl << "You lose..." << endl;
}