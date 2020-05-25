//
// Created by XingfengYang on 2020/5/25.
//

#include "../../include/controller/NetlinkController.h"


void hm::netd::NetlinkController::Init() {
    this->AddRoute({"/getRoute", GET}, std::bind(&NetlinkController::GetRoute, this, std::placeholders::_1));
}

hm::netd::HandlerResponse hm::netd::NetlinkController::GetRoute(hm::netd::HttpRequest request) {
    return {OK, "{\"route\":[]}"};
}