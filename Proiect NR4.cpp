#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <algorithm>

#define limit 100

using namespace std;

void showMatrix ( int matrix[limit][limit], int row, int column );
void Position ( int matrix, int row, int column, int value );
void manualMatrix ( int matrix[limit][limit], int row, int column );
void randomMatrix ( int matrix[limit][limit], int row, int column );
void searchMax ( int matrix[limit][limit], int row, int column );
void searchMin ( int matrix[limit][limit], int row, int column );

int main() {
	
	setlocale(LC_ALL, "Russian");
	
	int row, column, value1, value2;
	int matrix[limit][limit];
	char key1, key2;
	
	do {
		
		cout << "\t\t ��������� ������ � ������� \n\n" <<endl;
	    cout << "1.����� ���������� � ���������� �������� � �������, � �� �������." << endl;
		cout << "2.�������� ������� ������ ��� �������." << endl;
		cout << "3.De ad?ugat o linie ?i / sau coloan?, de completat cu caracteristica conform variantei." << endl;
		cout << "4.De aranjat o matrice dup? linia sau coloana ad?ugat?." << endl;
		cout << "5.De generat o matrice conform variantei.\n" << endl;
	    cout << "\t|1 2 3|" <<endl;
	    cout << "\t|6 5 4|" <<endl;
	    cout << "\t|7 8 9|\n" <<endl;
	    cout << "0.�����" <<endl;
	    key1 = getch();
	    
	    switch (key1) {
	    	
	    	case '1':
	    		
	    		do {
	    			
	    			system("CLS");
	    			cout << "\t\t ����� ���������� � ���������� �������� � �������, � �� ������� \n\n";
            		cout << "1. ������ ������� �������" << endl;
                	cout << "2. ������������� �������" << endl;
                	cout << "0. ������� ����\n\n";
					key2 = getch();
					
					switch (key2) {
						
						case '1':
							
							system("CLS");
							cout << "������� ���������� ����� = ";
							cin >> row;
							cout << "������� ���������� ������� = ";
							cin >> column;
							
							manualMatrix( matrix, row, column );
							searchMax( matrix, row, column );
							searchMin( matrix, row ,column );
							
							cout << endl;
							cout << "\t( 'Enter' - ��������� � ���� )" << endl;
							getch();
							break;
							
						case '2':
							
							system("CLS");
							cout << "������� ���������� ����� = ";
							cin >> row;
							cout << "������� ���������� ������� = ";
							cin >> column;
							
							randomMatrix( matrix, row, column );
							searchMax( matrix, row, column );
							searchMin( matrix, row ,column );
							
							cout << endl;
							cout << "\t( 'Enter' - ��������� � ���� )" << endl;
							getch();
							break;
					}
					
				} while ( key2 != 0 );
        		break;
        		
        	case '2':
        		
	    		do {
	    			
	    			system("CLS");
	    			cout << "\t\t ����� ���������� � ���������� �������� � �������, � �� ������� \n\n";
            		cout << "1. ������ ������� �������" << endl;
                	cout << "2. ������������� �������" << endl;
                	cout << "0. ������� ����\n\n";
					key2 = getch();
					
					switch (key2) {
						
						case '1':
							
							system("CLS");
							cout << "������� ���������� ����� = ";
							cin >> row;
							cout << "������� ���������� ������� = ";
							cin >> column;
							
							manualMatrix( matrix, row, column );
							searchMax( matrix, row, column );
							searchMin( matrix, row ,column );
							
							cout << endl;
							cout << "\t( 'Enter' - ��������� � ���� )" << endl;
							getch();
							break;
							
						case '2':
							
							system("CLS");
							cout << "������� ���������� ����� = ";
							cin >> row;
							cout << "������� ���������� ������� = ";
							cin >> column;
							
							randomMatrix( matrix, row, column );
							searchMax( matrix, row, column );
							searchMin( matrix, row ,column );
							
							cout << endl;
							cout << "\t( 'Enter' - ��������� � ���� )" << endl;
							getch();
							break;
					}
					
				} while ( key2 != 0 );
	    		getch();
        		break;
        	case '3':
	    		system("CLS");
	    		getch();
        		break;
        	case '4':
	    		system("CLS");
	    		getch();
        		break;
        	case '5':
	    		system("CLS");
	    		getch();
        		break;
		}
	} while ( key1 != '0');
	
	return 1;
}

void showMatrix ( int matrix[limit][limit], int row, int column ) {
	int i, j;
	cout << endl;
	cout << " �������: \n\n";
	for ( i = 0; i < row; i++ ) {
		for ( j =0; j < column; j++ ) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void Position ( int matrix[limit][limit], int row, int column, int value ) {
	int i, j;
	for ( i = 0; i < row; i++ ) {
		for ( j = 0; j < column; j++ ) {
			if ( matrix[i][j] == value ) {
				cout << " [" << i << ";" << j << " ] ";
			}
		}
	}
}

void manualMatrix ( int matrix[limit][limit], int row, int column ) {
	int i, j;
	cout << "������� �������� �������: " << endl;
	for ( i = 0; i < row; i++ ) {
		for ( j = 0; j < column; j++) {
			cout << "[ "<< i + 1 << ";" << j + 1 << " ] = ";
			cin >> matrix[i][j];
		}
		cout << endl;
	}
	showMatrix( matrix, row, column );
}

void randomMatrix ( int matrix[limit][limit], int row, int column ) {
	int i, j;
	for ( i = 0; i < row; i++ ) {
		for ( j =0; j < column; j++ ) {
			matrix[i][j] = rand() % 8 + 3;
		}
	}
	showMatrix( matrix, row, column );
}

void searchMax ( int matrix[limit][limit], int row, int column ) {
	int i, j, max;
	max = matrix[0][0];
	for ( i = 0; i < row; i++ ) {
		for ( j = 0; j < column; j++ ) {
			if ( matrix[i][j] > max ) {
				max = matrix[i][j];
			}
		}
	}
	cout << "���������� �������� � ������� = " << max << " � ������� ";
	Position ( matrix, row, column, max );
	cout << endl;
}

void searchMin ( int matrix[limit][limit], int row, int column ) {
	int i, j, min;
	min = matrix[0][0];
	for ( i = 0; i < row; i++ ) {
		for ( j = 0; j < column; j++ ) {
			if ( matrix[i][j] < min ) {
				min = matrix[i][j];
			}
		}
	}
	cout << "���������� �������� � ������� = " << min << " � ������� ";
	Position ( matrix, row, column, min );
	cout << endl;
}

void changeRows ( matrix[limit][limit], row, column ) {
	
}
