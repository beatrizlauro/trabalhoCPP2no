#include <iostream>
#include <fstream>

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
	int cpf;
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
	int i=0;
	int a=0;
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
		cout << "OBS: Para adicionar um associado, dependente ou visitante,   necess rio cadastrar o individuo antes!\n";
		cout << "============================================"<<endl;
	} while(op!=7);
	return 0;
}

void cadastroPessoa(pessoa cad_pessoa[], endereco cad_endereco[], dt_nasc nascimento[], pessoa cad_pessoa[], int &i, const string &){
	fstream arquivo;
	fstream cadastroPessoa_stream(arquivo, ios::app | ios::out); //abre o arquivo
	
	cout << "Insira seu cpf: "<<endl;
	cin >> cad_pessoa[i].cpf;
	cadastroPessoa_stream << "CPF: " << cad_pessoa[i].cpf<<"\n";
	
	cin.ignore();
	cout << "Insira seu nome: "<<endl;
	getline(cin, cad_pessoa[i].nome);
	cadastroPessoa_stream << "Nome: " << cad_pessoa[i].nome<<"\n";
	
	cout << "Insira o dia que você nasceu: "<<endl;
	cin >> nascimento[i].dia;
	cadastroPessoa_stream << "Data nasc "<< nascimento[i].dia<<"/";
	cout << "Insira o dia que você nasceu: "<<endl;
	cin >> nascimento[i].mes;
	cadastroPessoa_stream << nascimento[i].mes<<"/";
	cout << "Insira o dia que voc  nasceu: "<<endl;
	cin >> nascimento[i].ano;
	cadastroPessoa_stream << narcimento[i].ano<<"\n";
	
	cout << "Insira o bairro em que você reside: "<<endl;
	getline(cin, cad_enderecos[i].bairro);
	cadastroPessoa_stream << "Bairro "<< cad_enderecos[i].bairro<<"\n";
	cout << "Insira a rua em que voc  reside: "<<endl;
	getline(cin, cad_enderecos[i].rua);
	cadastroPessoa_stream << "Rua "<< cad_enderecos[i].rua<<"\n";
	cout << "Insira a cidade em que voc  reside: "<<endl;
	getline(cin, cad_enderecos[i].cidade);
	cadastroPessoa_stream << "Cidade "<< cad_enderecos[i].cidade<<"\n";
	
	cout << "Insira o estado em que voc  reside: "<<endl;
	getline(cin, cad_enderecos[i].estado);
	cadastroPessoa_stream << "Estado "<< cad_enderecos[i].estado<<"\n";
	
	cout << "Insira o numero da casa em que voc  reside: "<<endl;
	getline(cin, cad_enderecos[i].num);
	cadastroPessoa_stream << "Numero da casa "<< cad_enderecos[i].num<<"\n";
	
	cout << "Insira o seu gênero (M/F): "<<endl;
	cin >> cad_pessoa[i].sexo;
	cadastroPessoa_stream << "Gênero "<< cad_pessoa[i].sexo<<"\n";
	
	cout << "Insira seu telefone para contato: " << endl;
	cin >> cad_pessoa[i].telefone;
	cadastroPessoa_stream << "Telefone "<< cad_pessoa[i].telefone<<"\n";
	
	cout << "Insira seu email: "<<endl;
	cin << cad_pessoa[i].email;
	cadastroPessoa_stream << "Email "<< cad_pessoa[i].email<<"\n";
	
	cadastroPessoa_stream << "============================================\n";
	cadastroPessoa_stream.close();
	
	i++;
}

void cad_associado(pessoa cad_pessoa[], associado cad_assos[], int &i, int &a){
	
	int cpf_aux;
	bool cpf_encontrado = false;
	
	cout << "Insira um cpf bara buscar o cadastro: "<<endl;
	cin >> cpf_aux;
	
	ifstream arquivo_stream("cadastro_pessoas.txt"); // abre o arquivo que cadastrou pessoas
	
	if (!arquivo_stream.is_open()){
		cout << "Erro ao abrir o arquivo de cadastro de pessoas."<<endl;
		return;
	}
	
	while(!cadastro_pessoas.eof()){
		cadastroPessoas_stream >> cad_pessoa[i].cpf;
		cadastroPessoas_stream.ignore();
		getline(cadastroPessoas_stream, cad_pessoa[i].nome);
		cadastroPessoas_stream >> nascimento[i].dia >> "/" >> nascimento[i].mes >> "/" >> nascimento[i].ano;
        getline(cadastroPessoas_stream, cad_endereco[i].bairro);
        getline(cadastroPessoas_stream, cad_endereco[i].rua);
		getline(cadastroPessoas_stream, cad_endereco[i].cidade);
		getline(cadastroPessoas_stream, cad_endereco[i].num);
		cadastroPessoas_stream >> cad_pessoa[i].sexo;
		getline(cadastroPessoas_stream, cad_pessoa[i].telefone);
		getline(cadastroPessoas_stream, cad_pessoa[i].email);
		
		if (cpf_aux == cad_pessoa[i].cpf){
			cout << "Arquivo encontrado!"<<endl;
			cadastroPessoas_stream.close();
			
			ifstream arquivo_associados_stream("cadastro_associados.txt", ios::app);
			
				if (!arquivo_associados_stream.is_open()){
				cout << "Erro ao abrir o arquivo de cadastro de associados."<<endl;
				return;
		}
		
		cad_assos[a].cpf = cad_pessoa[i].cpf;
		arquivo_associados_stream << "CPF: " << cad_pessoa[a]<< "\n";
		arquivo_associados_stream << "Nome: " << cad_pessoa[i].nome << "\n";
		arquivo_associados_stream << "Data nasc: "<< nascimento[i].dia<<"/"<< nascimento[i].mes<<"/"<< nascimento[i].ano<<"/";
		arquivo_associados_stream << "Bairro: "<< cad_endereco[i].bairro<<"\n";
		arquivo_associados_stream << "Rua: "<< cad_endereco[i].rua<<"\n";
		arquivo_associados_stream << "Cidade: "<< cad_endereco[i].cidade<<"\n";
		arquivo_associados_stream << "Número: "<< cad_endereco[i].numero<<"\n";
		arquivo_associados_stream << "Gênero: "<< cad_pessoa[i].sexo<<"\n";
		arquivo_associados_stream << "Telefone: "<< cad_pessoa[i].telefone<<"\n";
		arquivo_associados_stream << "Email: "<< cad_pessoa[i].email<<"\n";
		
		cout << "Insira o tipo de sócio(proprietário/contribuinte): ";
		cin >> cad_assos[a].tipo_socio;
		arquivo_associados_stream << "Tipo de sócio: "<< cad_assos[a].tipo_socio<<"\n";
		cout << "Mensalidade: ";
		cin >> cad_assos[a].mensalidade;
		cout << "Associado cadastrado com sucesso! Código do associado: " << cad_assos[a].codigo_associado << endl;
		a++;
		cpf_cadastrado = true;
		break;
	}
	
		i++;
		
	}
	
	if (!cpf_encontrado){
		cout << "CPF não encontrado no cadastro." << endl;
	}
	
	while (!cadastroPessoas_stream.eof()) {
        cadastroPessoas_stream >> cad_pessoa[i].cpf;
        cadastroPessoas_stream.ignore();
        getline(cadastroPessoas_stream, cad_pessoa[i].nome);
        cadastroPessoas_stream >> nascimento[i].dia >> nascimento[i].mes >> nascimento[i].ano;
        getline(cadastroPessoas_stream, cad_endereco[i].bairro);
        getline(cadastroPessoas_stream, cad_endereco[i].rua);
        getline(cadastroPessoas_stream, cad_endereco;
	
}