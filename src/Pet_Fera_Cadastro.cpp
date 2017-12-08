/**
 * @file Pet_Fera_Cadastro.cpp
 * @brief      Implementação da classe Pet_Fera_Cadastro, seus atributos e métodos
 * @details    
 *
 * @author     Gleydvan Macedo
 * @author     João Vítor Venceslau Coelho
 * @since      03/12/2017
 * @date       03/12/2017
 */

#include "Pet_Fera_Cadastro.hpp"
//#include <tuple>
using namespace PetFera;

Pet_Fera_Cadastro::Pet_Fera_Cadastro()
{

}

Pet_Fera_Cadastro::~Pet_Fera_Cadastro()
{

}


bool Pet_Fera_Cadastro::cadastrar_anfibio( std::string _classe, std::string _tipo )
{

	int 		_id;
	std::string _nome;
	std::string _cientifico;
	char 		_sexo;
	float 		_tamanho;
	std::string _dieta;
	int 		_id_veterinario;
	int			_id_tratador;
	std::string _batismo;
	int			_total_mudas;
	std::string _ultima_muda;
	std::string _ibama;
	std::string _uf_origem;
	std::string _autorizacao;
	std::string _pais_origem;

	std::cout << "Numero de Identificacao do Animal (ID): ";
	std::cin >> _id;
	std::cout << "\nNome: ";
	std::cin >> _nome;
	std::cout << "\nNome Cientifico: ";
	std::cin >> _cientifico;
	std::cout << "\nSexo: ";
	std::cin >> _sexo;
	std::cout << "\nTamanho: ";
	std::cin >> _tamanho;
	std::cout << "\nDieta: ";
	std::cin >> _dieta;
	std::cout << "\nID do Veterinario responsavel: ";
	std::cin >> _id_veterinario;
	std::cout << "\nID do Tratador responsavel: ";
	std::cin >> _id_tratador;
	std::cout << "\nNome de batismo: ";
	std::cin >> _batismo;	
	std::cout << "\nTotal de mudas: ";
	std::cin >> _total_mudas;
	std::cout << "\nData da ultima muda (DD/MM/AAAA): ";
	std::cin >> _ultima_muda;

	Tratador * tratador_resp;
	Veterinario * veterinario_resp;

	/*	Assumir que todo animal a ser cadastrado tem que ter um tratador e um veterinario associado	*/

	if( m_tabela_tratador.find( _id_tratador ) != m_tabela_tratador.end() )
		tratador_resp = m_tabela_tratador[ _id_tratador ];

	if( m_tabela_veterinario.find( _id_veterinario ) != m_tabela_veterinario.end() )
		veterinario_resp = m_tabela_veterinario[ _id_veterinario ];

	if( _tipo.compare( "Domestico" ) == 0 )
	{

		Anfibio * anfibio_domestico = new Anfibio( _id, _classe, _tipo, _nome, _cientifico
													, _sexo, _tamanho, _dieta, veterinario_resp
													, tratador_resp, _batismo, _total_mudas, _ultima_muda);

		m_tabela_anfibio.insert( std::pair<int, Anfibio*> ( _id, anfibio_domestico ) );

	
	} else if( _tipo.compare( "Nativo" ) == 0 )
	{

		std::cout << "\nID do Ibama: ";
		std::cin >> _ibama;
		std::cout << "\nEstado de Origem: ";
		std::cin >> _uf_origem;
		std::cout << "\nAutorizacao do Ibama: ";
		std::cin >> _autorizacao;

		Anfibio * anfibio_nativo = new AnfibioNativo( _id, _classe, _tipo, _nome, _cientifico
													, _sexo, _tamanho, _dieta, veterinario_resp
													, tratador_resp, _batismo, _total_mudas, _ultima_muda
													, _ibama, _uf_origem, _autorizacao );

		m_tabela_anfibio.insert( std::pair<int, Anfibio*> ( _id, anfibio_nativo ) );


	} else if( _tipo.compare( "Exotico" ) == 0 )
	{

		std::cout << "\nID do Ibama: ";
		std::cin >> _ibama;
		std::cout << "\nPais de Origem: ";
		std::cin >> _pais_origem;

		Anfibio * anfibio_exotico = new AnfibioExotico( _id, _classe, _tipo, _nome, _cientifico
													, _sexo, _tamanho, _dieta, veterinario_resp
													, tratador_resp, _batismo, _total_mudas, _ultima_muda
													, _ibama, _pais_origem );

		m_tabela_anfibio.insert( std::pair<int, Anfibio*> ( _id, anfibio_exotico ) );		


	}

	return true;

}

bool Pet_Fera_Cadastro::cadastrar_mamifero( std::string _classe, std::string _tipo )
{

	int 		_id;
	std::string _nome;
	std::string _cientifico;
	char 		_sexo;
	float 		_tamanho;
	std::string _dieta;
	int 		_id_veterinario;
	int			_id_tratador;
	std::string _batismo;
	std::string _cor_pelo;
	std::string _ibama;
	std::string _uf_origem;
	std::string _autorizacao;
	std::string _pais_origem;

	std::cout << "Numero de Identificacao do Animal (ID): ";
	std::cin >> _id;
	std::cout << "\nNome: ";
	std::cin >> _nome;
	std::cout << "\nNome Cientifico: ";
	std::cin >> _cientifico;
	std::cout << "\nSexo: ";
	std::cin >> _sexo;
	std::cout << "\nTamanho: ";
	std::cin >> _tamanho;
	std::cout << "\nDieta: ";
	std::cin >> _dieta;
	std::cout << "\nID do Veterinario responsavel: ";
	std::cin >> _id_veterinario;
	std::cout << "\nID do Tratador responsavel: ";
	std::cin >> _id_tratador;
	std::cout << "\nNome de batismo: ";
	std::cin >> _batismo;	
	std::cout << "\nCor do pelo do animal: ";
	std::cin >> _cor_pelo;

	Tratador * tratador_resp;
	Veterinario * veterinario_resp;

	/*	Assumir que todo animal a ser cadastrado tem que ter um tratador e um veterinario associado	*/

	if( m_tabela_tratador.find( _id_tratador ) != m_tabela_tratador.end() )
		tratador_resp = m_tabela_tratador[ _id_tratador ];

	if( m_tabela_veterinario.find( _id_veterinario ) != m_tabela_veterinario.end() )
		veterinario_resp = m_tabela_veterinario[ _id_veterinario ];
	
	

	if( _tipo.compare( "Domestico" ) == 0 )
	{

		Mamifero * mamifero_domestico = new Mamifero( _id, _classe, _tipo, _nome, _cientifico
													, _sexo, _tamanho, _dieta, veterinario_resp
													, tratador_resp, _batismo, _cor_pelo);

		m_tabela_mamifero.insert( std::pair<int, Mamifero*> ( _id, mamifero_domestico ) );


	
	} else if( _tipo.compare( "Nativo" ) == 0 )
	{

		std::cout << "\nID do Ibama: ";
		std::cin >> _ibama;
		std::cout << "\nEstado de Origem: ";
		std::cin >> _uf_origem;
		std::cout << "\nAutorizacao do Ibama: ";
		std::cin >> _autorizacao;

		Mamifero * mamifero_nativo = new MamiferoNativo( _id, _classe, _tipo, _nome, _cientifico
													, _sexo, _tamanho, _dieta, veterinario_resp
													, tratador_resp, _batismo, _cor_pelo
													, _ibama, _uf_origem, _autorizacao );

		m_tabela_mamifero.insert( std::pair<int, Mamifero*> ( _id, mamifero_nativo ) );
		


	} else if( _tipo.compare( "Exotico" ) == 0 )
	{

		std::cout << "\nID do Ibama: ";
		std::cin >> _ibama;
		std::cout << "\nPais de Origem: ";
		std::cin >> _pais_origem;

		Mamifero * mamifero_exotico = new MamiferoExotico( _id, _classe, _tipo, _nome, _cientifico
													, _sexo, _tamanho, _dieta, veterinario_resp
													, tratador_resp, _batismo, _cor_pelo
													, _ibama, _pais_origem );

		m_tabela_mamifero.insert( std::pair<int, Mamifero*> ( _id, mamifero_exotico ) );


	}

	return true;
}

bool Pet_Fera_Cadastro::cadastrar_reptil( std::string _classe, std::string _tipo )
{

	int 		_id;
	std::string _nome;
	std::string _cientifico;
	char 		_sexo;
	float 		_tamanho;
	std::string _dieta;
	int 		_id_veterinario;
	int			_id_tratador;
	std::string _batismo;
	std::string	_venenoso;
	std::string _tipo_veneno;
	bool possui_veneno = false;
	std::string _ibama;
	std::string _uf_origem;
	std::string _autorizacao;
	std::string _pais_origem;

	std::cout << "Numero de Identificacao do Animal (ID): ";
	std::cin >> _id;
	std::cout << "\nNome: ";
	std::cin >> _nome;
	std::cout << "\nNome Cientifico: ";
	std::cin >> _cientifico;
	std::cout << "\nSexo: ";
	std::cin >> _sexo;
	std::cout << "\nTamanho: ";
	std::cin >> _tamanho;
	std::cout << "\nDieta: ";
	std::cin >> _dieta;
	std::cout << "\nID do Veterinario responsavel: ";
	std::cin >> _id_veterinario;
	std::cout << "\nID do Tratador responsavel: ";
	std::cin >> _id_tratador;
	std::cout << "\nNome de batismo: ";
	std::cin >> _batismo;	
	std::cout << "\nAnimal venenoso ( sim ou nao ): ";
	std::cin >> _venenoso;

	if( _venenoso.compare( "sim" ) == 0 )
	{
		
		std::cout << "\nTipo do veneno: ";
		std::cin >> _tipo_veneno;
		possui_veneno = true;

	} else
	{
		_tipo_veneno = "nenhum";
		
	}

	Tratador * tratador_resp;
	Veterinario * veterinario_resp;

	/*	Assumir que todo animal a ser cadastrado tem que ter um tratador e um veterinario associado	*/

	if( m_tabela_tratador.find( _id_tratador ) != m_tabela_tratador.end() )
		tratador_resp = m_tabela_tratador[ _id_tratador ];

	if( m_tabela_veterinario.find( _id_veterinario ) != m_tabela_veterinario.end() )
		veterinario_resp = m_tabela_veterinario[ _id_veterinario ];
	

	if( _tipo.compare( "Domestico" ) == 0 )
	{



		Reptil * reptil_domestico = new Reptil( _id, _classe, _tipo, _nome, _cientifico
													, _sexo, _tamanho, _dieta, veterinario_resp
													, tratador_resp, _batismo, possui_veneno, _tipo_veneno);

		m_tabela_reptil.insert( std::pair<int, Reptil*> ( _id, reptil_domestico ) );

	
	} else if( _tipo.compare( "Nativo" ) == 0 )
	{

		std::cout << "\nID do Ibama: ";
		std::cin >> _ibama;
		std::cout << "\nEstado de Origem: ";
		std::cin >> _uf_origem;
		std::cout << "\nAutorizacao do Ibama: ";
		std::cin >> _autorizacao;

		Reptil * reptil_nativo = new ReptilNativo( _id, _classe, _tipo, _nome, _cientifico
													, _sexo, _tamanho, _dieta, veterinario_resp
													, tratador_resp, _batismo, possui_veneno, _tipo_veneno
													, _ibama, _uf_origem, _autorizacao );

		m_tabela_reptil.insert( std::pair<int, Reptil*> ( _id, reptil_nativo ) );
		


	} else if( _tipo.compare( "Exotico" ) == 0 )
	{

		std::cout << "\nID do Ibama: ";
		std::cin >> _ibama;
		std::cout << "\nPais de Origem: ";
		std::cin >> _pais_origem;
		
		Reptil * reptil_exotico = new ReptilExotico( _id, _classe, _tipo, _nome, _cientifico
													, _sexo, _tamanho, _dieta, veterinario_resp
													, tratador_resp, _batismo, possui_veneno, _tipo_veneno
													, _ibama, _pais_origem );

		m_tabela_reptil.insert( std::pair<int, Reptil*> ( _id, reptil_exotico ) );


	}

	return true;
}

bool Pet_Fera_Cadastro::cadastrar_ave( std::string _classe, std::string _tipo )
{

	int 		_id;
	std::string _nome;
	std::string _cientifico;
	char 		_sexo;
	float 		_tamanho;
	std::string _dieta;
	int 		_id_veterinario;
	int			_id_tratador;
	std::string _batismo;
	float		_tamanho_bico;
	float 		_envergadura;
	std::string _ibama;
	std::string _uf_origem;
	std::string _autorizacao;
	std::string _pais_origem;

	
	std::cout << "Numero de Identificacao do Animal (ID): ";
	std::cin >> _id;
	std::cout << "\nNome: ";
	std::cin >> _nome;
	std::cout << "\nNome Cientifico: ";
	std::cin >> _cientifico;
	std::cout << "\nSexo: ";
	std::cin >> _sexo;
	std::cout << "\nTamanho: ";
	std::cin >> _tamanho;
	std::cout << "\nDieta: ";
	std::cin >> _dieta;
	std::cout << "\nID do Veterinario responsavel: ";
	std::cin >> _id_veterinario;
	std::cout << "\nID do Tratador responsavel: ";
	std::cin >> _id_tratador;
	std::cout << "\nNome de batismo: ";
	std::cin >> _batismo;
	std::cout << "\nTamanho do bico do animal: ";
	std::cin >> _tamanho_bico;
	std::cout << "\nEnvergadura do animal: ";
	std::cin >> _envergadura;

	Tratador * tratador_resp;
	Veterinario * veterinario_resp;

	/*	Assumir que todo animal a ser cadastrado tem que ter um tratador e um veterinario associado	*/

	if( m_tabela_tratador.find( _id_tratador ) != m_tabela_tratador.end() )
		tratador_resp = m_tabela_tratador[ _id_tratador ];

	if( m_tabela_veterinario.find( _id_veterinario ) != m_tabela_veterinario.end() )
		veterinario_resp = m_tabela_veterinario[ _id_veterinario ];

	if( _tipo.compare( "Domestico" ) == 0 )
	{


		Ave * ave_domestico = new Ave( _id, _classe, _tipo, _nome, _cientifico
													, _sexo, _tamanho, _dieta, veterinario_resp
													, tratador_resp, _batismo, _tamanho_bico, _envergadura);

		m_tabela_ave.insert( std::pair<int, Ave*> ( _id, ave_domestico ) );

	
	} else if( _tipo.compare( "Nativo" ) == 0 )
	{

		std::cout << "\nID do Ibama: ";
		std::cin >> _ibama;
		std::cout << "\nEstado de Origem: ";
		std::cin >> _uf_origem;
		std::cout << "\nAutorizacao do Ibama: ";
		std::cin >> _autorizacao;

		Ave * ave_nativo = new AveNativo( _id, _classe, _tipo, _nome, _cientifico
													, _sexo, _tamanho, _dieta, veterinario_resp
													, tratador_resp, _batismo, _tamanho_bico, _envergadura
													, _ibama, _uf_origem, _autorizacao );

		m_tabela_ave.insert( std::pair<int, Ave*> ( _id, ave_nativo ) );
		


	} else if( _tipo.compare( "Exotico" ) == 0 )
	{

		std::cout << "\nID do Ibama: ";
		std::cin >> _ibama;
		std::cout << "\nPais de Origem: ";
		std::cin >> _pais_origem;

		Ave * ave_exotico = new AveExotico( _id, _classe, _tipo, _nome, _cientifico
													, _sexo, _tamanho, _dieta, veterinario_resp
													, tratador_resp, _batismo, _tamanho_bico, _envergadura
													, _ibama, _pais_origem );

		m_tabela_ave.insert( std::pair<int, Ave*> ( _id, ave_exotico ) );


	}

	return true;
}

bool Pet_Fera_Cadastro::cadastrar_funcionario( std::string _funcao )
{

	int 		_id;
	std::string _nome;
	std::string _CPF;
	short 		_idade;
	short 		_tipo_sangue;		// A / B / AB / O
	short 		_fator_RH;			// + / -
	std::string _especialidade;

	std::cout << "Numero de Identificacao do Funcionario (ID): ";
	std::cin >> _id;
	std::cout << "\nNome do Funcionario: ";
	std::cin >> _nome;
	std::cout << "\nCPF do Funcionario: ";
	std::cin >> _CPF;
	std::cout << "\nIdade do Funcionario: ";
	std::cin >> _idade;
	std::cout << "\nTipo sanguineo do Funcionario: ";
	std::cin >> _tipo_sangue;
	std::cout << "\nFator RH do tipo sanguineo: ";
	std::cin >> _fator_RH;
	std::cout << "\nEspecialidade: " << std::endl;
	std::cin >> _especialidade;

	if( _funcao.compare( "Tratador" ) == 0  )
	{

		Tratador * novo_tratador = new Tratador( _id, _funcao, _nome, _CPF, _idade, _tipo_sangue, _fator_RH, _especialidade );
		m_tabela_tratador.insert( std::pair<int, Tratador*> ( _id, novo_tratador ) );

	} else if ( _funcao.compare( "Veterinario" ) == 0  )
	{

		Veterinario * novo_veterinario = new Veterinario( _id, _funcao, _nome, _CPF, _idade, _tipo_sangue, _fator_RH, _especialidade );
		m_tabela_veterinario.insert( std::pair<int, Veterinario*> ( _id, novo_veterinario ) );

	}

	return true;
}

bool Pet_Fera_Cadastro::consultar_animais( int _id, std::string _classe )
{
	std::cin.ignore();
	std::cout << "===			FLAG 00			===" << std::endl;

	if( _classe.compare( "Amphibia" ) == 0 )
	{

		std::map< int, Anfibio* >::iterator it = m_tabela_anfibio.find( _id );

		if( it != m_tabela_anfibio.end() )
		{

			std::cout << "===			FLAG 01			===" << std::endl;
			std::cout << "Dados do Animal procurado: " << std::endl;
			std::cout << *(it->second) << std::endl;

			return true;

		} else
			std::cout << "Animal nao encontrado!" << std::endl;

	}

	else if( _classe.compare( "Mammalia" ) == 0 )
	{
		
		std::map< int, Mamifero* >::iterator it = m_tabela_mamifero.find( _id );
		

		if( it != m_tabela_mamifero.end() )
		{

			std::cout << "===			FLAG 02			===" << std::endl;
			std::cout << "Dados do Animal procurado: " << std::endl;
			std::cout << *(it->second) << std::endl;

			return true;

		} else
			std::cout << "Animal nao encontrado!" << std::endl;

	}

	else if( _classe.compare( "Reptilia" ) == 0 )
	{

		std::map< int, Reptil* >::iterator it = m_tabela_reptil.find( _id );

		if( it != m_tabela_reptil.end() )
		{

			std::cout << "===			FLAG 03			===" << std::endl;
			std::cout << "Dados do Animal procurado: " << std::endl;
			std::cout << *(it->second) << std::endl;

			return true;

		} else
			std::cout << "Animal nao encontrado!" << std::endl;

	}

	else if( _classe.compare( "Aves" ) == 0 )
	{

		std::map< int, Ave* >::iterator it = m_tabela_ave.find( _id );

		if( it != m_tabela_ave.end() )
		{

			std::cout << "===			FLAG 04			===" << std::endl;
			std::cout << "Dados do Animal procurado: " << std::endl;
			std::cout << *(it->second) << std::endl;

			return true;

		} else
			std::cout << "Animal nao encontrado!" << std::endl;

	}

	return false;

}


/*		Metodo abaixo compilando, porem não testado		*/

bool Pet_Fera_Cadastro::consultar_animais_funcionario( int _id, std::string _funcao )
{

	std::map< int, Anfibio* >::iterator it_anf = m_tabela_anfibio.begin();
	std::map< int, Mamifero* >::iterator it_mam = m_tabela_mamifero.begin();
	std::map< int, Reptil* >::iterator it_rep = m_tabela_reptil.begin();
	std::map< int, Ave* >::iterator it_ave = m_tabela_ave.begin();

	if( _funcao.compare( "Veterinario" ) == 0 )
	{

		std::map< int, Veterinario* >::iterator it_veterinario = m_tabela_veterinario.find( _id );

		if( it_veterinario != m_tabela_veterinario.end() )
		{

			while( it_anf != m_tabela_anfibio.end() )
			{

				if( it_anf -> second -> get_id() == _id )
				{

					std::cout << it_anf -> second << std::endl;

				}

				++it_anf;
			}

			while( it_mam != m_tabela_mamifero.end() )
			{

				if( it_mam -> second -> get_id() == _id )
				{

					std::cout << it_mam -> second << std::endl;

				}

				++it_mam;
			}

			while( it_rep != m_tabela_reptil.end() )
			{

				if( it_rep -> second -> get_id() == _id )
				{

					std::cout << it_rep -> second << std::endl;

				}

				++it_rep;
			}

			while( it_ave != m_tabela_ave.end() )
			{

				if( it_ave -> second -> get_id() == _id )
				{

					std::cout << it_ave -> second << std::endl;

				}

				++it_ave;
			}


		} else 
			std::cout << "Nao existe Funcionario com o ID fornecido" << std::endl;


	}
	else if ( _funcao.compare( "Tratador" ) == 0 )
	{

		std::map< int, Tratador* >::iterator it_tratador = m_tabela_tratador.find( _id );

		if( it_tratador != m_tabela_tratador.end() )
		{

			while( it_anf != m_tabela_anfibio.end() )
			{

				if( it_anf -> second -> get_id() == _id )
				{

					std::cout << it_anf -> second << std::endl;

				}

				++it_anf;
			}

			while( it_mam != m_tabela_mamifero.end() )
			{

				if( it_mam -> second -> get_id() == _id )
				{

					std::cout << it_mam -> second << std::endl;

				}

				++it_mam;
			}

			while( it_rep != m_tabela_reptil.end() )
			{

				if( it_rep -> second -> get_id() == _id )
				{

					std::cout << it_rep -> second << std::endl;

				}

				++it_rep;
			}

			while( it_ave != m_tabela_ave.end() )
			{

				if( it_ave -> second -> get_id() == _id )
				{

					std::cout << it_ave -> second << std::endl;

				}

				++it_ave;
			}

		} else 
			std::cout << "Nao existe Funcionario com o ID fornecido" << std::endl;

	}

	return false;

}

/*		Não Testado		*/
bool Pet_Fera_Cadastro::consultar_funcionarios( int _id, std::string _funcao )
{
	if( _funcao.compare( "Veterinario" ) == 0 )
	{

		std::map< int, Veterinario* >::iterator it_veterinario =  m_tabela_veterinario.find( _id );

		if( it_veterinario != m_tabela_veterinario.end() )
		{
			std::cout << "Dados do Funcionario procurado: " << std::endl;
			std::cout << it_veterinario -> second << std::endl;

			return true;

		} else
			std::cout << "Funcionario nao encontrado" << std::endl;

	} else if( _funcao.compare( "Tratador" ) == 0 )
	{

		std::map< int, Tratador* >::iterator it_tratador =  m_tabela_tratador.find( _id );

		if( it_tratador != m_tabela_tratador.end() )
		{
			std::cout << "Dados do Funcionario procurado: " << std::endl;
			std::cout << it_tratador -> second << std::endl;

			return true;

		} else
			std::cout << "Funcionario nao encontrado" << std::endl;

	}
	return false;
}

/*		Não Testado		*/
bool Pet_Fera_Cadastro::remover_funcionario( int _id, std::string _funcao )
{

	if( _funcao.compare( "Veterinario" ) == 0 )
	{

		std::map< int, Veterinario* >::iterator it_veterinario =  m_tabela_veterinario.find( _id );

		if( it_veterinario != m_tabela_veterinario.end() )
		{

			m_tabela_veterinario.erase( it_veterinario );
			return true;

		} else
			std::cout << "Funcionario nao encontrado" << std::endl;

	} else if( _funcao.compare( "Tratador" ) == 0 )
	{

		std::map< int, Tratador* >::iterator it_tratador =  m_tabela_tratador.find( _id );

		if( it_tratador != m_tabela_tratador.end() )
		{

			m_tabela_tratador.erase( it_tratador );
			return true;

		} else
			std::cout << "Funcionario nao encontrado" << std::endl;

	}

	return false;
}

/*		Não Testado		*/
bool Pet_Fera_Cadastro::remover_animal( int _id, std::string _classe )
{

	if( _classe.compare( "Anfibio" ) == 0 )
	{

		std::map< int, Anfibio* >::iterator it = m_tabela_anfibio.find( _id );

		if( it != m_tabela_anfibio.end() )
		{

			m_tabela_anfibio.erase( it );

			return true;

		} else
			std::cout << "Animal nao encontrado!" << std::endl;

	}

	else if( _classe.compare( "Mamifero" ) == 0 )
	{

		std::map< int, Mamifero* >::iterator it = m_tabela_mamifero.find( _id );

		if( it != m_tabela_mamifero.end() )
		{

			m_tabela_mamifero.erase( it );

			return true;

		} else
			std::cout << "Animal nao encontrado!" << std::endl;

	}

	else if( _classe.compare( "Reptil" ) == 0 )
	{

		std::map< int, Reptil* >::iterator it = m_tabela_reptil.find( _id );

		if( it != m_tabela_reptil.end() )
		{

			m_tabela_reptil.erase( it );

			return true;

		} else
			std::cout << "Animal nao encontrado!" << std::endl;

	}

	else if( _classe.compare( "Ave" ) == 0 )
	{

		std::map< int, Ave* >::iterator it = m_tabela_ave.find( _id );

		if( it != m_tabela_ave.end() )
		{

			m_tabela_ave.erase( it );

			return true;

		} else
			std::cout << "Animal nao encontrado!" << std::endl;

	}

	return false;
}


/*		Implementar métodos abaixo		*/

bool Pet_Fera_Cadastro::alterar_dados_animais( int _id, std::string _classe )
{

	return true;

}

bool Pet_Fera_Cadastro::alterar_dados_funcionarios( int _id, std::string _funcao )
{

	return true;

}

bool Pet_Fera_Cadastro::importar_dados_animais( std::ifstream& dados_animais )
{
	std::string linha;
	std::vector< std::string > campos;
	std::getline(dados_animais, linha);
	if (linha != "ID;Classe;Tipo;Nome;Nome Cientifico;Sexo;Tamanho;Dieta;Veterinario;Tratador;Batismo;Tamanho do Bico;Envergadura;Total Mudas;Ultima Muda;Cor do Pelo;Venenoso;Tipo Veneno;Ibama;UF / Pais;Autorizacao")
	{
		std::cerr << linha << std::endl;
		//Outro bom momento para lançar uma exceçao!
		std::cerr << "CSV não está no formato correto." << std::endl;
		std::cerr << "Fechando o programa." << std::endl;
		std::cerr << "1" << std::endl;
		std::exit(1);
	}
	while( std::getline( dados_animais, linha))
	{
		if(linha == "")
		{
			continue;
		}
		campos = separar( linha,';' );

		Veterinario* veterinario	= nullptr;
		Tratador* 	 tratador		= nullptr;

		for (std::map<int, Veterinario*>::iterator it = m_tabela_veterinario.begin(); it != m_tabela_veterinario.end(); ++it)
		{
			if( it->second->get_id() == std::stoi(campos[8]) )
			{
				veterinario = it->second;
			}
		}

		for (std::map<int, Tratador*>::iterator it = m_tabela_tratador.begin(); it != m_tabela_tratador.end(); ++it)
		{
			if( it->second->get_id() == std::stoi(campos[9]) )
			{
				tratador = it->second;
			}
		}
		std::cout << campos[6] << "  " << campos[11] << "  " <<  campos[11] << std::endl;
		if( campos[1] == "Amphibia" and campos[2] == "Domestico" )
		{
			m_tabela_anfibio.insert( std::pair<int, Anfibio*>(std::stoi(campos[0]), new Anfibio( std::stoi(campos[0]),
			campos[1], campos[2], campos[3], campos[4], campos[5][0], std::stof(campos[6]),
			campos[7], veterinario!=nullptr?veterinario:0, tratador!=nullptr?tratador:0,
			campos[10], std::stoi(campos[13]), campos[14] ) ) );
		}
		else if( campos[1] == "Amphibia" and campos[2] == "Exotico" )
		{
			m_tabela_anfibio.insert( std::pair<int, Anfibio*>(std::stoi(campos[0]), new AnfibioExotico( std::stoi(campos[0]),
			campos[1], campos[2], campos[3], campos[4], campos[5][0], std::stof(campos[6]),
			campos[7], veterinario!=nullptr?veterinario:0, tratador!=nullptr?tratador:0,
			campos[10], std::stoi(campos[13]), campos[14], campos[18], campos[19]  ) ) );
		}
		else if( campos[1] == "Amphibia" and campos[2] == "Nativo")
		{
			m_tabela_anfibio.insert( std::pair<int, Anfibio*>(std::stoi(campos[0]), new AnfibioNativo( std::stoi(campos[0]),
			campos[1], campos[2], campos[3], campos[4], campos[5][0], std::stof(campos[6]),
			campos[7], veterinario!=nullptr?veterinario:0, tratador!=nullptr?tratador:0,
			campos[10], std::stoi(campos[13]), campos[14], campos[18], campos[19], campos[20] ) ) );
		}
		else if( campos[1] == "Mammalia" and campos[2] == "Domestico" )
		{
			m_tabela_mamifero.insert( std::pair<int, Mamifero*>(std::stoi(campos[0]), new Mamifero( std::stoi(campos[0]),
			campos[1], campos[2], campos[3], campos[4], campos[5][0], std::stof(campos[6]),
			campos[7], veterinario!=nullptr?veterinario:0, tratador!=nullptr?tratador:0,
			campos[10], campos[15] ) ) );
		}
		else if( campos[1] == "Mammalia" and campos[2] == "Exotico")
		{
			m_tabela_mamifero.insert( std::pair<int, Mamifero*>(std::stoi(campos[0]), new MamiferoExotico( std::stoi(campos[0]),
			campos[1], campos[2], campos[3], campos[4], campos[5][0], std::stof(campos[6]),
			campos[7], veterinario!=nullptr?veterinario:0, tratador!=nullptr?tratador:0,
			campos[10], campos[15], campos[18], campos[19]  ) ) );
		}
		else if( campos[1] == "Mammalia" and campos[2] == "Nativo")
		{
			m_tabela_mamifero.insert( std::pair<int, Mamifero*>(std::stoi(campos[0]), new MamiferoNativo( std::stoi(campos[0]),
			campos[1], campos[2], campos[3], campos[4], campos[5][0], std::stof(campos[6]),
			campos[7], veterinario!=nullptr?veterinario:0, tratador!=nullptr?tratador:0,
			campos[10], campos[15], campos[18], campos[19], campos[20]  ) ) );
		}
		else if( campos[1] == "Reptilia" and campos[2] == "Domestico" )
		{
			m_tabela_reptil.insert(	std::pair<int, Reptil*>(std::stoi(campos[0]), new Reptil( std::stoi(campos[0]),
			campos[1], campos[2], campos[3], campos[4], campos[5][0], std::stof(campos[6]),
			campos[7], veterinario!=nullptr?veterinario:0, tratador!=nullptr?tratador:0,
			campos[10], campos[16]=="Sim", campos[17] ) ) );
		}
		else if( campos[1] == "Reptilia" and campos[2] == "Exotico")
		{
			m_tabela_reptil.insert(	std::pair<int, Reptil*>(std::stoi(campos[0]), new ReptilExotico( std::stoi(campos[0]),
			campos[1], campos[2], campos[3], campos[4], campos[5][0], std::stof(campos[6]),
			campos[7], veterinario!=nullptr?veterinario:0, tratador!=nullptr?tratador:0,
			campos[10], campos[16]=="Sim", campos[17], campos[18], campos[19]  ) ) );
		}
		else if( campos[1] == "Reptilia" and campos[2] == "Nativo")
		{
			m_tabela_reptil.insert( std::pair<int, Reptil*>(std::stoi(campos[0]), new ReptilNativo( std::stoi(campos[0]),
			campos[1], campos[2], campos[3], campos[4], campos[5][0], std::stof(campos[6]),
			campos[7], veterinario!=nullptr?veterinario:0, tratador!=nullptr?tratador:0,
			campos[10], campos[16]=="Sim", campos[17], campos[18], campos[19], campos[20] ) ) );
		}
		else if( campos[1] == "Aves" and campos[2] == "Domestico" )
		{
			m_tabela_ave.insert( std::pair<int, Ave*>(std::stoi(campos[0]), new Ave( std::stoi(campos[0]),
			campos[1], campos[2], campos[3], campos[4], campos[5][0], std::stof(campos[6]),
			campos[7], veterinario!=nullptr?veterinario:0, tratador!=nullptr?tratador:0,
			campos[10], std::stof(campos[11]), std::stof(campos[12]) ) ) );
		}
		else if( campos[1] == "Aves" and campos[2] == "Exotico")
		{
			m_tabela_ave.insert( std::pair<int, Ave*>(std::stoi(campos[0]), new AveExotico( std::stoi(campos[0]),
			campos[1], campos[2], campos[3], campos[4], campos[5][0], std::stof(campos[6]),
			campos[7], veterinario!=nullptr?veterinario:0, tratador!=nullptr?tratador:0,
			campos[10], std::stof(campos[11]), std::stof(campos[12]), campos[18], campos[19] ) ) );
		}				
		else if( campos[1] == "Aves" and campos[2] == "Nativo")
		{
			m_tabela_ave.insert( std::pair<int, Ave*>(std::stoi(campos[0]), new AveNativo( std::stoi(campos[0]),
			campos[1], campos[2], campos[3], campos[4], campos[5][0], std::stof(campos[6]),
			campos[7], veterinario!=nullptr?veterinario:0, tratador!=nullptr?tratador:0,
			campos[10], std::stof(campos[11]), std::stof(campos[12]), campos[18], campos[19], campos[20] ) ) );
		}
		else
		{
			std::cerr << campos[1] << "  " << campos[2] << std::endl;
			// Possível local para lançar uma exceção!!
			std::cerr << "CSV não está no formato correto." << std::endl;
			std::cerr << "Fechando o programa." << std::endl;
			std::cerr << "2" << std::endl;
			std::exit(1);
		}
	}
	return true;
}

bool Pet_Fera_Cadastro::importar_dados_funcionarios()
{
	return true;
}

bool Pet_Fera_Cadastro::exportar_dados_animais()
{
	return true;
}

bool Pet_Fera_Cadastro::exportar_dados_funcionarios()
{
	return true;
}

unsigned int Pet_Fera_Cadastro::quantidade_animais_cadastrados( void )
{

	return ( m_tabela_anfibio.size() + m_tabela_mamifero.size() + m_tabela_reptil.size() + m_tabela_ave.size() );

}

unsigned int Pet_Fera_Cadastro::quantidade_funcionarios_cadastrados( void )
{
	return m_tabela_veterinario.size() + m_tabela_tratador.size();
}