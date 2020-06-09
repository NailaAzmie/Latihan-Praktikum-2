#include <iostream>
using namespace std ;

int main () {
	int n, cek=0 ;
	cout << "Mementukan bilangan prima atau bukan" << endl ;
	cout << "Masukkan angka : " ;
	cin >> n ;
	
	for ( int i = 2 ; i <= n ; i++ ) { // bilangan prima dimulai dari angka 2
		if ( n % i == 0 ) {
			cek++ ;
		}
	}
	if (cek==1) {
		cout << n << " adalah bilangan prima" << endl ;
	} else {
		cout << n<< " adalah bukan bilangan prima" ;
	}
}
