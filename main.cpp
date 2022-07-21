#include "sentry.h"
#include <iostream>



int main(int argc, char * argv[])
{
    sentry_options_t *options = sentry_options_new();
    sentry_options_set_dsn(options, "https://2eb500f498af4a66b22ab4873e5a4b38@o1326645.ingest.sentry.io/6587187");
    sentry_init(options);

    for (auto i = 0; i < argc; ++i)
    {
        std::cout << argv[i] << '\n';
    }

    sentry_close();

    return 0;
}
