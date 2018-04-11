#include "mpc.h"

int main(int argc, char** argv){
	
	mpc_parser_t* Adjective = mpc_new("adjective");
	mpc_parser_t* None = mpc_new("none");
	mpc_parser_t* Phrase = mpc_new("phrase");
	mpc_parser_t* Doge = mpc_new("doge");
	
	
	mpca_lang(MPCA_LANG_DEFAULT,
	
		"							     	\
		adjective : \"wow\" \"many\"		\
				  | \"so\"  \"such\";		\
		none      : \"lisp\" \"lanauage\"   \
				  | \"book\" \"build\" 		\
				  | \"c\";					\
		phrase    : \"<adjective> <none>\"  \
		doge      : \"<phrase>*;			\
		",
		Adjective,None,Phrase,Doge);
	
	
	
	mpc_cleanup(4,Adjective,None,Phrase,Doge);
	
	return 0;
	
}
