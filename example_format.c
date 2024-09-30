#include <stdio.h>
#include <locale.h>
#include <libintl.h>
#include <stdlib.h>
#include <getopt.h>
#include <bits/getopt_ext.h>


#define VERSION "1.0"
#define PACKAGE "hello"
#define LOCALE "/usr/share/locale"
#define _(STRING) gettext(STRING)



#ifdef LOCALE
    printf(_("LOCALE Is Defined !"));
#else /* NOT LOCALE */
    printf(_("LOCALE is not Defined"))

#endif /* NOT LOCALE */



#ifdef VERSION
    printf(_("VERSION Is Defined !"));
#else /* NOT VERSION */
    printf(_("VERSION is not Defined"))

#endif /* NOT VERSION */



#ifdef PACKAGE
    printf(_("PACKAGE Is Defined !"));
#else /* NOT LOCALE */
    printf(_("PACKAGE is not Defined"))

#endif /* NOT LOCALE */



static char *progname;


struct option longopts[] = {
    {"greeting",required_argument,NULL,'g'},
    {"help",no_argument,NULL,'h'},
    {"version",no_argument,NULL,'v'},
    {0,0,0,0}
};



void print_help(){
    printf(_("Usage %s--> [OPTION]..."))
    printf(_( 
        "  -h, --help          Display this help and exit\n"
        "  -v, --version       Output version information and exit\n"
        "  -g, --greeting=TEXT Use TEXT as the greeting message\n"))
}

void print_version(void) {
    printf(_("%s version %s\n"), PACKAGE, VERSION);
    printf(_(
        "Copyright 1991-1994, 1997, 1998, 2000, 2004, 2006, 2008, 2012-2017 Free Software Foundation, Inc.\n"
        "This is free software with ABSOLUTELY NO WARRANTY.\n"
        "For details type `warranty'.\n"
    ));
}

int main(){
    int optc;

    progname = argv[0];

    setlocale(LC_ALL,"");
    bindtextdomain(PACKAGE,LOCALE);
    textdomain(PACKAGE);

    while((optc = getopt_long(argc,argv,"g:hv",longopts,NULL)) != -1 ){
        switch (optc)
        {
        case 'g':
            greeting = optarg;
            break;
        
        case 'h':
            print_help();
        
        case 'v':
            print_version();

        default:
            fprintf(stderr,_("Try %s --help (or) -h for more information.\n"),prognam);
            exit(1);
        }
    }

    if (!greeting) {
        greeting = _("Hello, world!");
    }

    printf("%s\n", greeting);

    return 0;
}

