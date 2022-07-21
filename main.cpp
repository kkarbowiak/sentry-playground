#include "sentry.h"
#include <iostream>



int main(int argc, char * argv[])
{
    sentry_options_t *options = sentry_options_new();
    sentry_options_set_dsn(options, "https://YOUR_KEY@oORG_ID.ingest.sentry.io/PROJECT_ID");
    sentry_init(options);

    for (auto i = 0; i < argc; ++i)
    {
        std::cout << argv[i] << '\n';
    }

    sentry_close();

    return 0;
}
