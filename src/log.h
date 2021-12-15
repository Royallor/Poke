#ifndef __POKE_LOG_H__
#define __POKE_LOG_H__
namespace poke {

#include<string>
#include<cstdint>

    class LogEvent{
    private:
        const char* m_file= nullptr;
        int32_t m_line=0;
        uint32_t m_threadId=0;
        uint32_t m_fiberId=0;
        uint64_t m_time;
        std::string m_content; //消息
    public:
        LogEvent(){};
    };

    //日志器
    class Logger {
        int32_t
    };

//日志输出地
    class LogAppender {

    };
}

#endif
