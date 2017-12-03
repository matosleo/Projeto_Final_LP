/**
 * @file Pet_Fera_Exportar.cpp
 * @brief      Implementação de um programa auxiliar para o Pet_Fera que
 *             perminte filtrar e exportar os dados dos animais
 * @details    
 *
 * @author     Gleydvan Macedo
 * @author     João Vítor Venceslau Coelho
 * @since      03/12/2017
 * @date       03/12/2017
 */

bool termina_com(const std::string &str, const std::string &suffix)
{
    return str.size() >= suffix.size() and str.compare(str.size() - suffix.size(), suffix.size(), suffix) == 0;
}

int main(int argc, char const *argv[])
{
	bool c_flag = false, v_flag = false, t_flag = false;
	char c;
	std::string classe, veterinario, tratador, arquivo_saida;
	opterr = 0;
	while ((c = getopt (argc, argv, "c:v:t:")) != -1)
	{
	 	switch(c)
	 	{
			case 'c':
				c_flag = true;
				classe = optarg;
				break;
			case 'v':
				v_flag = true;
				veterinario = optarg;
				break;
			case 't':
				v_flag = true;
				tratador = optarg;
				break;
			case '?':
				if (optopt == 'c' or optopt == 'v' or optopt == 't')
				{
					std::cerr << "Erro: '-" << char(optopt) << "' necessita de um argumento.\n";
					return 1;
				} else if (isprint(optopt))
				{
					std::cerr << "Erro: '-" << char(optopt) << "' inválido.\n";
					return 1;
				} else {
					std::cerr << "Erro: '\\x" << optopt << "' caractere inválido\n" ;
					return 1;
				}	
			default:
				std::cerr << "Erro desconhecido. Programa abortado.\n" ;
				return 1;
		}
	}
	if (optind < argc){
		// nome do arquivo de saida
		arquivo_saida = argv[optind];
	}
	if ( argc < 2 or (not termina_com(arquivo_saida,".csv") ) )
	{
		std::cout << "\t--Modo de usar--" << std::endl
				  << "Opcional:		'-c' <Classe> - Indica a classe de animais a serem exportados." << std::endl
				  << "Opcional:		'-v' <Veterinario> - indica que apenas animais sob a responsabilidade do veterinário informado devem ser exportados." << std::endl
				  << "Opcional:		'-t' <Tratador> - indica que apenas animais tratados pelo tratador informado devem ser exportados" << std::endl
				  << "Obrigatório:	<Arquivo de Saida> - indica o nome do arquivo de saída, ou seja, do arquivo onde serão guardados os dados a serem exportados" << std::endl;
		return 1;
	}

	if (c_flag)
	{
		
	}

	if (v_flag)
	{
		
	}

	if (t_flag)
	{
		
	}
}