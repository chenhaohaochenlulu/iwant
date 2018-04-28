#include "all_h_include.h"

#ifndef MAIN_TEST
#define MAIN_TEST 0//1
#endif

int Cmain::my_init(void *p)
{
	this->name = "Cmain";
	this->alias ="main";
	this->temp = MAIN_TEMP;
	this->s_tag="[tag]";
	return 0;
}

Cmain::Cmain()
{
	this->my_init();
}

int Cmain::is_exist_main(char *f_name)
{
	return this->is_exist_func(f_name,(char *)"main");
}

int Cmain::deal_cmd(int argc, char *argv[])
{
	char * str_tag=nullptr;
	do{
		argc--;
		//AT_LINE cout<<"argv["<<argc<<"]="<<argv[argc]<<endl;//list all command line
		if(argc<1)	break;
		
		char * str_tag=(char *)argv[argc];
		if(false==this->is_identifier(str_tag)) //check str_tag 
		{
			if(false==this->is_path(str_tag))	return -1;//check str_tag is path
			str_tag=strrchr(str_tag,'/');
		#if WINDOWS_OS
			if(!str_tag) str_tag=strrchr(str_tag,'\\');
		#endif
			if(!str_tag) return -1;
			str_tag++ ; //skip '/' or '\'
	 	}
		
		this->tag_temp(str_tag);

		this->f_name=argv[argc];
		this->f_name+=".cpp";
		if(this->is_exist_main((char *) this->f_name.c_str())) continue;//exist main ()
		this->f_append((char *)this->temp.c_str());
		
	}while(argc>0);
	return -1;
}

#if MAIN_TEST||_TEST==0//1
int main(int argc, char *argv[])
{
	cout << "MAIN_TEST\n\n";
	Cuuid uuid;
	cout << uuid.uuid << endl;

	Cmain m;
	m.deal_cmd(argc,argv);
	if(argc>1) cout<<argv[1]<<m.is_exist_main(argv[1])<<endl;	//test is_exist_main func

	return 0;
}
#endif
