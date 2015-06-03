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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Filter.h>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /*
    <p></p>
  */
  class AWS_RDS_API DescribeEngineDefaultParametersRequest : public RDSRequest
  {
  public:
    DescribeEngineDefaultParametersRequest();
    Aws::String SerializePayload() const override;


    /*
     <p> The name of the DB parameter group family. </p>
    */
    inline const Aws::String& GetDBParameterGroupFamily() const{ return m_dBParameterGroupFamily; }
    /*
     <p> The name of the DB parameter group family. </p>
    */
    inline void SetDBParameterGroupFamily(const Aws::String& value) { m_dBParameterGroupFamily = value; }

    /*
     <p> The name of the DB parameter group family. </p>
    */
    inline void SetDBParameterGroupFamily(const char* value) { m_dBParameterGroupFamily.assign(value); }

    /*
     <p> The name of the DB parameter group family. </p>
    */
    inline DescribeEngineDefaultParametersRequest&  WithDBParameterGroupFamily(const Aws::String& value) { SetDBParameterGroupFamily(value); return *this;}

    /*
     <p> The name of the DB parameter group family. </p>
    */
    inline DescribeEngineDefaultParametersRequest& WithDBParameterGroupFamily(const char* value) { SetDBParameterGroupFamily(value); return *this;}

    /*
     <p> Not currently supported. </p>
    */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }
    /*
     <p> Not currently supported. </p>
    */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /*
     <p> Not currently supported. </p>
    */
    inline DescribeEngineDefaultParametersRequest&  WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /*
     <p> Not currently supported. </p>
    */
    inline DescribeEngineDefaultParametersRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /*
     <p> The maximum number of records to include in the response. If more records exist than the specified <code>MaxRecords</code> value, a pagination token called a marker is included in the response so that the remaining results may be retrieved. </p> <p>Default: 100</p> <p>Constraints: minimum 20, maximum 100</p>
    */
    inline long GetMaxRecords() const{ return m_maxRecords; }
    /*
     <p> The maximum number of records to include in the response. If more records exist than the specified <code>MaxRecords</code> value, a pagination token called a marker is included in the response so that the remaining results may be retrieved. </p> <p>Default: 100</p> <p>Constraints: minimum 20, maximum 100</p>
    */
    inline void SetMaxRecords(long value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /*
     <p> The maximum number of records to include in the response. If more records exist than the specified <code>MaxRecords</code> value, a pagination token called a marker is included in the response so that the remaining results may be retrieved. </p> <p>Default: 100</p> <p>Constraints: minimum 20, maximum 100</p>
    */
    inline DescribeEngineDefaultParametersRequest&  WithMaxRecords(long value) { SetMaxRecords(value); return *this;}

    /*
     <p> An optional pagination token provided by a previous <code>DescribeEngineDefaultParameters</code> request. If this parameter is specified, the response includes only records beyond the marker, up to the value specified by <code>MaxRecords</code>. </p>
    */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    /*
     <p> An optional pagination token provided by a previous <code>DescribeEngineDefaultParameters</code> request. If this parameter is specified, the response includes only records beyond the marker, up to the value specified by <code>MaxRecords</code>. </p>
    */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /*
     <p> An optional pagination token provided by a previous <code>DescribeEngineDefaultParameters</code> request. If this parameter is specified, the response includes only records beyond the marker, up to the value specified by <code>MaxRecords</code>. </p>
    */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /*
     <p> An optional pagination token provided by a previous <code>DescribeEngineDefaultParameters</code> request. If this parameter is specified, the response includes only records beyond the marker, up to the value specified by <code>MaxRecords</code>. </p>
    */
    inline DescribeEngineDefaultParametersRequest&  WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /*
     <p> An optional pagination token provided by a previous <code>DescribeEngineDefaultParameters</code> request. If this parameter is specified, the response includes only records beyond the marker, up to the value specified by <code>MaxRecords</code>. </p>
    */
    inline DescribeEngineDefaultParametersRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:
    Aws::String m_dBParameterGroupFamily;
    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;
    long m_maxRecords;
    bool m_maxRecordsHasBeenSet;
    Aws::String m_marker;
    bool m_markerHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws