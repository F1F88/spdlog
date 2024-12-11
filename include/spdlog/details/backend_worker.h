// Copyright(c) 2015-present, Gabi Melman & spdlog contributors.
// Distributed under the MIT License (http://opensource.org/licenses/MIT)

#pragma once


namespace spdlog {

namespace details {

class thread_pool;

class backend_worker : public std::enable_shared_from_this<backend_worker> {
    friend class thread_pool;

protected:
    virtual void backend_sink_it_(const details::log_msg &msg) = 0;
    virtual void backend_flush_() = 0;
};

}  // namespace details
}  // namespace spdlog
