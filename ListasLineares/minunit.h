/*Macro para rodar todos os tests criados*/
#define mu_run_all char *result = all_tests(); \
    if (result != 0) { \
        printf("%s\n", result); \
        system("color 4");\
    }\
    else {\
        printf("ALL TESTS PASSED\n");\
        system("color 2");\
    }\
    printf("Tests run: %d\n", tests_run);\
    tests_run = 0;\

/**/
#define mu_assert(message, test) do { if (!(test)) return message; } while (0)

/**/
#define mu_run_test(test) do { char *message = test(); tests_run++; \
                               if (message) return message; } while (0)
extern int tests_run;
