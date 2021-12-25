#include "log.h"

namespace poke {
    Logger::Logger(const std::string &name) : m_name(name) {}

    void Logger::addAppender(LogAppender::ptr appender) {
        m_appenders.push_back(appender);
    }

    void Logger::delAppender(LogAppender::ptr appender) {
        for(auto it=m_appenders.begin();it!=m_appenders.end();it++){
            if(*it==appender){
                m_appenders.erase(it);
                break;
            }
        }
    }




}
//
// Created by Administrator on 2021/12/25.
//

