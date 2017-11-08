#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

using std::cout;
using std::cin;

int componente( const double & );
double calcteorico( const double );

int main()
{
	cout << "Fazer a compara" << char(135) << "" << char(198) << "o entre simula" << char(135) << "" << char(198) << "o e c" << char(160) << "lculo te" << char(162) << "rico do circuito com quatro pontos para verificar seu funcionamento!\n\n";
	
	
	srand( ( int ) time( 0 ));
	const int NINT = 10000;
	const double P = 0.9;
	double total;
	int count  = 0;
	
	for ( int i = 0; i < NINT; i++ )
		if (( componente( P ) && componente( P )) || ( componente( P ) && componente( P )))
			count++;
	
	total = double( count ) / double( NINT );
	
	cout << "Valor te" << char(162) << "rico de acordo com a fun" << char(135) << "" << char(198) << "o P = 2P^2 - P^4: " << calcteorico( P ) << "\n\n";
	cout << "Valor da simula" << char(135) << "" << char(198) << "o: "	<< total << '\n';
	
	return 0;
}

int componente( const double &P )
{
	
	if( double( rand() % 100 + 1 )/100 < P )
		return true;
	else
		return false;	
		
}

double calcteorico( const double P )
{
	double p_final;
	
	
	p_final = 2*pow( P, 2 ) - pow( P, 4 );
	

	return p_final;
}