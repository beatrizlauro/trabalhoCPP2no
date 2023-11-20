#include <iostream>

using namespace std;

struct pessoa{
	int cpf;
	string nome;
	char sexo;
	string telefone;
	string email;
};

struct endereco{
	string bairro;
	string rua;
	string cidade;
	string estado;
	string num;
	
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

void cadastroPessoa(pessoa cad_pessoa[], endereco cad_endereco[], dt_nasc nascimento[], pessoa cad_pessoa[], int &i, const string &){
	
	fstream cadastroPessoa_stream(arquivo, ios::app | ios::out); //abre o arquivo
	
	cout << "Insira seu cpf: "<<endl;
	cin >> cad_pessoa[i].cpf;
	cadastroPessoa_stream << "CPF: " << cad_pessoa[i].cpf<<"\n";
	
	cin.ignore();
	cout << "Insira seu nome: "<<endl;
	getline(cin, cad_pessoa[i].nome);
	cadastroPessoa_stream << "Nome: " << cad_pessoa[i].nome<<"\n";
	
	cout << "Insira o dia que voc  nasceu: "<<endl;
	cin >> nascimento[i].dia;
	cadastroPessoa_stream << "Data nasc "<< cad_pessoa[i].dia<<"/";
	cout << "Insira o dia que voc  nasceu: "<<endl;
	cin >> nascimento[i].mes;
	cadastroPessoa_stream << cad_pessoa[i].dia<<"/";
	cout << "Insira o dia que voc  nasceu: "<<endl;
	cin >> nascimento[i].ano;
	cadastroPessoa_stream << cad_pessoa[i].dia<<"\n";
	
	cout << "Insira o bairro em que voc  reside: "<<endl;
	getline(cin, cad_endereco[i].bairro);
	cadastroPessoa_stream << "Bairro "<< cad_endereco[i].bairro<<"\n";
	cout << "Insira a rua em que voc  reside: "<<endl;
	getline(cin, cad_endereco[i].rua);
	cadastroPessoa_stream << "Rua "<< cad_endereco[i].rua<<"\n";
	cout << "Insira a cidade em que voc  reside: "<<endl;
	getline(cin, cad_endereco[i].cidade);
	cadastroPessoa_stream << "Cidade "<< cad_endereco[i].cidade<<"\n";
	
	cout << "Insira o estado em que voc  reside: "<<endl;
	getline(cin, cad_endereco[i].estado);
	cadastroPessoa_stream << "Estado "<< cad_endereco[i].estado<<"\n";
	
	cout << "Insira o numero da casa em que voc  reside: "<<endl;
	getline(cin, cad_endereco[i].num);
	cadastroPessoa_stream << "Numero da casa "<< cad_endereco[i].num<<"\n";
	
	cout << "Insira o seu gênero (M/F): "<<endl;
	cin >> cad_pessoa[i].sexo;
	cadastroPessoa_stream << "Gênero "<< cad_endereco[i].sexo<<"\n";
	
	cout << "Insira seu telefone para contato: " << endl;
	cin >> cad_pessoa[i].telefone;
	cadastroPessoa_stream << "Telefone "<< cad_endereco[i].telefone<<"\n";
	
	cout << "Insira seu email: "<<endl;
	cin << cad_pessoa[i].email;
	cadastroPessoa_stream << "Email "<< cad_endereco[i].email<<"\n";
	
	cadastroPessoa_stream << "============================================\n";
	arquivo_stream.close()
	
	i++;
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