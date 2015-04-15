/*
 * Copyright 2015 Aldebaran
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
*/
#include "info.hpp"

namespace alros
{
namespace recorder
{

InfoRecorder::InfoRecorder( const std::string& topic ):
  BaseRecorder( topic )
{}

void InfoRecorder::write(const std_msgs::String& msg)
{
  gr_->write(topic_, msg);
}

void InfoRecorder::reset(boost::shared_ptr<GlobalRecorder> gr)
{
  gr_ = gr;
  is_initialized_ = true;
}

} //publisher
} // alros
