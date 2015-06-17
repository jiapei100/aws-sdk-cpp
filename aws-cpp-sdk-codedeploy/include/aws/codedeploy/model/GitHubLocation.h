/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/codedeploy/codedeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace codedeploy
{
namespace Model
{
  /*
    $shape.documentation
  */
  class AWS_CODEDEPLOY_API GitHubLocation
  {
  public:
    GitHubLocation();
    GitHubLocation(const Aws::Utils::Json::JsonValue& jsonValue);
    GitHubLocation& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const Aws::String& GetRepository() const{ return m_repository; }
    
    inline void SetRepository(const Aws::String& value) { m_repositoryHasBeenSet = true; m_repository = value; }

    
    inline void SetRepository(const char* value) { m_repositoryHasBeenSet = true; m_repository.assign(value); }

    
    inline GitHubLocation&  WithRepository(const Aws::String& value) { SetRepository(value); return *this;}

    
    inline GitHubLocation& WithRepository(const char* value) { SetRepository(value); return *this;}

    
    inline const Aws::String& GetCommitId() const{ return m_commitId; }
    
    inline void SetCommitId(const Aws::String& value) { m_commitIdHasBeenSet = true; m_commitId = value; }

    
    inline void SetCommitId(const char* value) { m_commitIdHasBeenSet = true; m_commitId.assign(value); }

    
    inline GitHubLocation&  WithCommitId(const Aws::String& value) { SetCommitId(value); return *this;}

    
    inline GitHubLocation& WithCommitId(const char* value) { SetCommitId(value); return *this;}

  private:
    Aws::String m_repository;
    bool m_repositoryHasBeenSet;
    Aws::String m_commitId;
    bool m_commitIdHasBeenSet;
  };

} // namespace Model
} // namespace codedeploy
} // namespace Aws