#include <iostream>

using namespace std;

struct pessoa{
	int cpf;
	string nome;
	char sexo;
	int telefone;
	string email;
};

struct endereco{
	string bairro;
	string rua;
	string cidade;
	string estado;
	int num;
	
};

struct dt_nasc{
	int dia;
	int mes;
	int ano;
};

struct dt_associacao{
	int ass_dia;
	int ass_mes;
	int ass_ano;	
};

struct dt_visita {
	int vis_dia;
	int vis_mes;
	int vis_ano;
	int vis_dia_final;
	int vis_mes_final;
	int vis_ano_final;
};

struct associado{
	int codigo_associado;
	string tipo_socio;
	float mensalidade;
};

struct dependente{
	int codigo_dependente;
	int codexterno;
};

struct visitante{
	int codigo_visitante;
};


int main()
{
	int op=0;
	int i=0
	pessoa cad_pessoa[100];
	dt_nasc nascimento[100];
	endereco cad_enderecos[100];
	associado cad_assos[100];
	dt_associacao data_assos[100];
	
	
	do{
		cout << "Bem vindo ao cadastro do Clube Jimin do BTS"<<endl;
		cout << "============================================"<<endl;
		cout << "Selecione a op  o que voc  deseja: "<<endl;
		cout << "1- Cadastro\n";
		cout << "2- Adicionar de Associado\n";
		cout << "3- Adicionar Dependente\n";
		cout << "4- Adicionar Visitante\n";
		cout << "5- Consulta\n";
		cout << "6- Alterar dados\n";
		cout << "7- Sair\n";
		cin >> op;
		cout << "\n\n\n";
		cout << "OBS: Para adicionar um associado, dependente ou visitante,   necess rio cadastrar o individuo antes!\n"
		cout << "============================================"<<endl;
	} while(op!=7)
	return 0;
}

void cadastroPessoa(pessoa cad_pessoa[], endereco cad_endereco[100], dt_nasc nascimento[], pessoa cad_pessoa[], int &i){
	
	cout << "Insira seu cpf: "<<endl;
	cin >> cad_pessoa[i].cpf;
	
	cin.ignore();
	cout << "Insira seu nome: "<<endl;
	getline(cin, cad_pessoa[i].nome);
	
	cout << "Insira o dia que voc  nasceu: "<<endl;
	cin >> nascimento[i].dia;
	cout << "Insira o dia que voc  nasceu: "<<endl;
	cin >> nascimento[i].mes;
	cout << "Insira o dia que voc  nasceu: "<<endl;
	cin >> nascimento[i].ano;
	
	cout << "Insira o bairro em que voc  reside: "<<endl;
	getline(cin, cad_endereco[i].bairro);
	cout << "Insira a rua em que voc  reside: "<<endl;
	getline(cin, cad_endereco[i].rua);
	cout << "Insira a cidade em que voc  reside: "<<endl;
	getline(cin, cad_endereco[i].cidade);
	cout << "Insira o estado em que voc  reside: "<<endl;
	getline(cin, cad_endereco[i].estado);
	cout << "Insira o numero da casa em que voc  reside: "<<endl;
	getline(cin, cad_endereco[i].num);
	
	cout << "Insira o seu g nero (M/F): "<<endl;
	cin >> cad_pessoa[i].sexo;
	
	cout << "Insira seu telefone para contato: " << endl;
	cin >> cad_pessoa[i].telefone;
	
	cout << "Insira seu email: "<<endl;
	cin << cad_pessoa[i].email;
	i++;
	cout<< "============================================"<<endl;
	
}

void cad_associado(pessoa cad_pessoa[], associado cad_assos[], int &i){
	
	int cpf_aux;
	
	cout << "Insira um cpf bara buscar o cadastro: "<<endl;
	cin >> cpf_aux;
	
	for(int j=0; j <=cad_pessoa[i]; j++){
		if(cpf_aux == cad_pessoa[i].cpf){
			cout << "Cadastro encontrado!"<<endl;
			cout << "Insira o tipo de s cio (porpriet rio/contribuinte):"<< endl;
			cin >> cad_assos[i]
		}
	}
	
	
	
}