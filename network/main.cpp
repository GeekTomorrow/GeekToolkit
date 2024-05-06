#include <iostream>
#include<string>
#include<cstdio>

using namespace std;

int network_github(){
    FILE* f = fopen("C:\\Windows\\System32\\drivers\\etc\\hosts", "a");
    const char* url = R"(# GitHub520 Host Start\n
140.82.113.26                 alive.github.com
140.82.113.6                  api.github.com
185.199.109.153               assets-cdn.github.com
185.199.111.133               avatars.githubusercontent.com
185.199.111.133               avatars0.githubusercontent.com
185.199.111.133               avatars1.githubusercontent.com
185.199.111.133               avatars2.githubusercontent.com
185.199.111.133               avatars3.githubusercontent.com
185.199.111.133               avatars4.githubusercontent.com
185.199.111.133               avatars5.githubusercontent.com
185.199.111.133               camo.githubusercontent.com
140.82.114.22                 central.github.com
185.199.111.133               cloud.githubusercontent.com
140.82.114.10                 codeload.github.com
140.82.114.21                 collector.github.com
185.199.111.133               desktop.githubusercontent.com
185.199.111.133               favicons.githubusercontent.com
140.82.112.3                  gist.github.com
52.216.53.225                 github-cloud.s3.amazonaws.com
52.216.132.179                github-com.s3.amazonaws.com
52.217.140.193                github-production-release-asset-2e65be.s3.amazonaws.com
52.217.18.52                  github-production-repository-file-5c1aeb.s3.amazonaws.com
16.182.72.249                 github-production-user-asset-6210df.s3.amazonaws.com
192.0.66.2                    github.blog
140.82.114.4                  github.com
140.82.112.17                 github.community
185.199.110.154               github.githubassets.com
151.101.193.194               github.global.ssl.fastly.net
185.199.109.153               github.io
185.199.111.133               github.map.fastly.net
185.199.109.153               githubstatus.com
140.82.112.26                 live.github.com
185.199.111.133               media.githubusercontent.com
185.199.111.133               objects.githubusercontent.com
13.107.42.16                  pipelines.actions.githubusercontent.com
185.199.111.133               raw.githubusercontent.com
185.199.111.133               user-images.githubusercontent.com
13.107.246.40                 vscode.dev
140.82.114.21                 education.github.com


# Update time: 2024-04-21T16:05:59+08:00
# Update url: https://raw.hellogithub.com/hosts
# Star me: https://github.com/521xueweihan/GitHub520
# GitHub520 Host End)";

    if (!f)
    {
        cout << "请用管理员权限运行!";
        return 1;
    }

    fputs(url, f);
    fclose(f);
    return 1;
}