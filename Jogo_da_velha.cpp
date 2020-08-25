//projeto de revisão de matrizes.

#include <iostream>
#include <locale.h>

using namespace std;

int main()
   {

	setlocale(LC_ALL,"Portuguese");

	const int TAM=3;
	int map [TAM][TAM] = {0}, playing = 1,line,column,cont=0;
	bool played=true;
	do{

	     cout<<"####### JOGO DA VELHA #######\n\n";
             for (int i=0;i<TAM;i++)
		{

                  cout<<"          ";

		  for (int j=0;j<TAM;j++)
		     {
			cout<<"|";
                        if (map[i][j] == 0)
 			  {
			     cout<<" ";
			  } else if (map[i][j]==1)
			  {
			     cout<<"X";
			  }else
                          {
			     cout<<"O";
                          }
		      }
		  cout<<"|"<<endl;
		}
	      cout<<endl<<endl;

	      cout<<"Jogador "<<playing<<", sua vez:\n";
              cout<<"Linha:";
	      cin>>line;
              cout<<"Coluna: ";
              cin>>column;
              cont++;

	      line--;
              column--;


	      while ( map[line][column] != 0)
		{
		  cout<<"Jogada invalida! tente novamente, jogador "<<playing;
                  cout<<"\nLinha:";
                  cin>>line;
                  cout<<"Coluna: ";
                  cin>>column;
		  line--;
		  column--;
                }

              if ( playing ==1)
		{
		  map [line][column] = 1;
		} else
		{
		  map [line][column] = 2;
                 }

              if(map[0][0]==playing && map[0][1]==playing && map[0][2]==playing)
                {
		   played = false;
		} else if  (map[1][0]==playing && map[1][1]==playing && map[1][2]==playing)
		{
		   played = false;
		}else if  (map[2][0]==playing && map[2][1]==playing && map[2][2]==playing)
                {
                   played = false;
                }else if  (map[0][0]==playing && map[1][0]==playing && map[2][0]==playing)
                {
                   played = false;
                }else if  (map[0][1]==playing && map[1][1]==playing && map[2][1]==playing)
                {
                   played = false;
                }else if  (map[0][2]==playing && map[1][2]==playing && map[2][2]==playing)
                {
                   played = false;
                }else if  (map[0][0]==playing && map[1][1]==playing && map[2][2]==playing)
                {
                   played = false;
                }else if  (map[0][2]==playing && map[1][1]==playing && map[2][0]==playing)
                {
                   played = false;
                }else if (cont == 9)
                {
		   played=false;
		} else
		{
		  if (playing == 1)
                    {
		      playing = 2;
		    } else
                    {
		      playing = 1;
		    }

		}
	  } while ( played==true);

 cout<<"####### JOGO DA VELHA #######\n\n";
             for (int i=0;i<TAM;i++)
                {

                  cout<<"          ";

                  for (int j=0;j<TAM;j++)
                     {
                        cout<<"|";
                        if (map[i][j] == 0)
                          {
                             cout<<" ";
                          } else if (map[i][j]==1)
                          {
                             cout<<"X";
                          }else
                          {
                             cout<<"O";
                          }
                      }
                  cout<<"|"<<endl;
                }
              cout<<endl<<endl;

	      cout<<"Parabéns jogador "<<playing<<", você venceu!\n\n";



        return 0;
   }
