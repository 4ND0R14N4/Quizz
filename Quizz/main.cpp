/*
Quiz desenvolvido em c++ para temas diversos.
Desenvolvedores: Rafael Candido de Jesus & Bruna Oliveira Stucchi
*/
#include <iostream>
#include <string>

using namespace std;

int Chute;
int Total;

class Questao{
	private:
		string Questao_Text;
		string Resposta_1;
		string Resposta_2;
		string Resposta_3;
		string Resposta_4;
		
		int Resposta_Correta;
		int Pontuacao_Pergunta;
		
	public:
		void setValores (string, string, string, string, string, int, int);
		void fazerPergunta();
	};

	void Questao::setValores(string q, string r1, string r2, string r3, string r4, int rc, int pp)
	{
		Questao_Text = q;
		Resposta_1 = r1;
		Resposta_2 = r2;
		Resposta_3 = r3;
		Resposta_4 = r4;
		Resposta_Correta = rc;
		Pontuacao_Pergunta = pp;
	}
	
	void Questao::fazerPergunta()
	{
		cout << Questao_Text; // objeto cout - stream de saída 
		cout << "1." << Resposta_1;
		cout << "2." << Resposta_2;
		cout << "3." << Resposta_3;
		cout << "4." << Resposta_4;
		
		cout << "Qual eh a sua resposta: Digite de 1 a 4";
		cin >> Chute; // objeto cin - stream de entrada
		
		if(Chute == Resposta_Correta)
		{
			cout << "Ai sim, malandro. Acertou!";
			Total = Total + Pontuacao_Pergunta;
			
			cout << "Pontuacao" << Pontuacao_Pergunta << "de" << Pontuacao_Pergunta <<"!";
		}
		else
		{
			cout << "Vacilao morre cedo. Vai estudar!";
			cout << "Pontuacao: 0" << "de" << Pontuacao_Pergunta << "!";
			cout << "A resposta correta eh" << Resposta_Correta << ".";
		}
	}

int main()
{
	string Nome1;
	cout << "Digite o nome do jogador 1";
	cin >> Nome1;
	
	string Nome2;
	cout << "Digite o nome do jogador 2";
	cin >> Nome2;
	
	string jogador1;
	string jogador2;
	
	Questao q1;
	Questao q2;
	
	q1.setValores("Quantos pes uma centopeia tem?",
	"30",
	"50",
	"300",
	"depende o seu animal",
	4,
	10);

	q2.setValores("Qual o esporte que menos doi a bunda?",
	"ciclismo",
	"crossfit birl",
	"boxe",
	"patins",
	3,
	10);
	
	q1.fazerPergunta();
	q2.fazerPergunta();
	
	cout << "Sua pontuacao total eh" << Total << "de 100!";
	cout << endl;
}
