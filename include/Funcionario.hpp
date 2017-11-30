
class Funcionario
{
private:
	int 		m_id;
	std::string m_nome;
	std::string m_CPF;
	short 		m_idade;
	short 		m_tipo_sangue;		// A / B / AB / O
	short 		m_fator_RH;			// + / -
	std::string m_especialidade;

public:

	Funcionario( int _id, std::string _nome, std::string _CPF, short _idade,
				 short _tipo_sangue, short _fator_RH, std::string _especialidade )
		: m_id 				(_id)
		, m_nome 			(_nome) 
		, m_CPF 			(_CPF)
		, m_idade 			(_idade)
		, m_tipo_sangue 	(_tipo_sangue)
		, m_fator_RH 		(_fator_RH)
		, m_especialidade 	(_especialidade)
	{ /* Vazio */ }
	virtual ~Funcionario();
	
	int get_id ( void );
	std::string get_nome ( void );
	std::string get_CPF ( void );
	short get_idade ( void );
	short get_t_sangue ( void );
	short get_RH ( void );
	std::string get_espec ( void );
/*
	int set_id (  );
	std::string set_nome (  );
	std::string set_CPF (  );
	short set_idade (  );
	short set_t_sangue (  );
	short set_RH (  );
	std::string set_espec (  );
*/
};

class Veterinario : public Funcionario
{
public:
	Veterinario( int _id, std::string _nome, std::string _CPF, short _idade,
				 short _tipo_sangue, short _fator_RH, std::string _especialidade )
		: Funcionario( _id, _nome, _CPF, _idade, _tipo_sangue, _fator_RH, _especialidade )
		{ /* Vazio */ }
	~Veterinario();
	
};

class Tratador : public Funcionario
{
public:
	Tratador( int _id, std::string _nome, std::string _CPF, short _idade,
				 short _tipo_sangue, short _fator_RH, std::string _especialidade )
		: Funcionario( _id, _nome, _CPF, _idade, _tipo_sangue, _fator_RH, _especialidade )
		{ /* Vazio */ }
	~Tratador();
	
};


